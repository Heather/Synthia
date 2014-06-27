module Main

import Control.Eternal
import Control.IOExcept

import Effect.StdIO
import Effect.File
import Effect.System

import Yaml

import Effects
import System

ls : String -> IO String
ls path = readProcess' ("ls " ++ path) False 

data Eternal : Effect where
     LS : String -> { () } Eternal String
instance Handler Eternal IO where
    handle () (LS s) k = do x <- ls s; k x ()
instance Handler Eternal (IOExcept a) where
    handle () (LS s) k = do x <- ioe_lift $ ls s; k x ()

ETERNAL : EFFECT
ETERNAL = MkEff () Eternal

els : String -> { [ETERNAL] } Eff IO String
els s = call $ LS s

EternalIO : Type -> Type -> Type
EternalIO st t = { [FILE_IO st, STDIO, SYSTEM, ETERNAL] } Eff IO t 

readFile : EternalIO (OpenFile Read) (List String)
readFile = readAcc [] where
  readAcc : List String -> EternalIO (OpenFile Read) (List String)
  readAcc acc = if (not !eof) then readAcc $ !readLine :: acc
                              else return  $ reverse acc

sys : String -> { [STDIO, SYSTEM, ETERNAL] } Eff IO ()
sys ss = do system ss
            return ()

-- for now I target Just windows...
install : List String -> List String -> { [STDIO, SYSTEM, ETERNAL] } Eff IO ()
install [] [] = putStrLn "try Synthia install GitHubUser/Repo"
install [] xs = let Just mypkg = xs # 0
                in sys $ "idris --install " ++ mypkg
install xs _ = do
    let dir = "C:\\Idris\\"
    let Just repo = xs # 0
    case (splitOn '/' (unpack repo)) # 1 of
        Just repx => do let reps = pack repx
                        sys $ "mkdir " ++ dir
                        let repoDir = dir ++ reps ++ "\\"
                        sys $ "git clone git@github.com:" ++ repo ++ ".git " ++ repoDir
                        let flist = splitOn '\n' !(els repoDir)
                        putStrLn "No ipkg in this repository"
                        let makeF = filter (== "Makefile") flist
                        case (makeF # 0) of
                            Just _ => sys $ "pushd " ++ repoDir ++ " & make & make install"
                            _ => let pkg = filter (\x => isSuffixOf <| unpack ".ipkg"
                                                                    <| unpack (trim x)) flist
                                 in case (pkg # 0) of
                                     Just pkg => sys $ "pushd " ++ repoDir ++ " & idris --install " ++ pkg
                                     _ => putStrLn "No ipkg in this repository"
        _ => putStrLn "try Synthia install GitHubUser/Repo" 

goC : List String -> List String -> String -> { [STDIO, SYSTEM, ETERNAL] } Eff IO ()
goC pkg args cc =
    case (pkg # 0) of
        Just mypkg => sys $ cc ++ concat <<| drop 2 args
                               ++ " "
                               ++ mypkg
        _ => putStrLn "No ipkg in this repository" 

quest : (List String) -> (List String) -> { [STDIO, SYSTEM, ETERNAL] } Eff IO ()
quest args file =
    let config = concat file
    in case parse yamlToplevelValue config of
       Left err => putStrLn $ "error: " ++ err
       Right v  => do
        putStrLn $ show v
        if length args > 1 then
            let pkg = filter (\x => isSuffixOf <| unpack ".ipkg"
                                               <| unpack (trim x))
                        $ splitOn '\n' !(els ".")
            in case (args # 1) of
                Just cmd => case cmd of
                                   "--help"     => putStrLn "try Synthia install GitHubUser/Repo"
                                   "--version"  => putStrLn "0.0.2"
                                   
                                   "build"      => goC pkg args "idris --build "
                                   "clean"      => goC pkg args "idris --clean "
                                   "mkdoc"      => goC pkg args "idris --mkdoc "
                                   "checkpkg"   => goC pkg args "idris --checkpkg "
                                   "testpkg"    => goC pkg args "idris --testpkg "
                                   
                                   "install"    => install (drop 2 args) pkg
                                   "list"       => sys "ls -d1 C:\\Idris/*/"
                                   
                                   _            => putStrLn "What?"
                _ => putStrLn "What?"
        else putStrLn "Hi, I am Synthia, I am here to destroy your world, I'm also weird by design"

cfg : String -> (List String) -> EternalIO () ()
cfg f args = case !(open f Read) of
                    True => do quest args !readFile
                               close {- =<< -}
                    False => putStrLn "Error!"

main : IO ()
main = System.getArgs >>= \args => run $ cfg "Synthia.syn" args
