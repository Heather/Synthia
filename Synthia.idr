module Main

import Control.Eternal
import Effect.StdIO
import Effect.File

import Effect.System

import Yaml
import Config

test : String -> { [STDIO] } Eff IO ()
test s = case parse yamlToplevelValue s of
  Left err => putStrLn $ "error: " ++ err
  Right v  => putStrLn $ show v

ls : String -> IO String
ls path = readProcess' ("ls " ++ path) False

-- for now I target Just windows...
install : List String -> List String -> IO()
install [] [] = putStrLn "try Synthia install GitHubUser/Repo"
install [] xs = let Just mypkg = xs # 0
                in system $ "idris --install " ++ mypkg
install xs _ = do
    let dir = "C:\\Idris\\"
    let Just repo = xs # 0
    case (splitOn '/' (unpack repo)) # 1 of
        Just repx => do let reps = pack repx
                        system $ "mkdir " ++ dir
                        let repoDir = dir ++ reps ++ "\\"
                        system $ "git clone git@github.com:" ++ repo ++ ".git " ++ repoDir
                        let flist = splitOn '\n' !(ls repoDir)
                        let makeF = filter (== "Makefile") flist
                        case (makeF # 0) of
                            Just _ => system $ "pushd " ++ repoDir ++ " & make & make install"
                            _ => let pkg = filter (\x => isSuffixOf <| unpack ".ipkg"
                                                                    <| unpack (trim x)) flist
                                 in case (pkg # 0) of
                                     Just pkg => system $ "pushd " ++ repoDir ++ " & idris --install " ++ pkg
                                     _ => putStrLn "No ipkg in this repository" 
        _ => putStrLn "try Synthia install GitHubUser/Repo" 

goC : List String -> List String -> String -> IO()
goC pkg args cc =
    case (pkg # 0) of
        Just mypkg => system $ cc ++ concat <<| drop 2 args
                                  ++ " "
                                  ++ mypkg
        _ => putStrLn "No ipkg in this repository" 

quest : (List String) -> { [STDIO] } Eff IO ()
quest file = do
    let config = concat file
    test config

compile : String -> FileIO () ()
compile f = do case !(open f Read) of
                True => do quest !readFile
                           close {- =<< -}
                False => putStrLn "Error!"

main : IO ()
main = System.getArgs >>= \args => do
    run $ compile "Synthia.syn"
    if length args > 1 then
        let pkg = filter (\x => isSuffixOf <| unpack ".ipkg"
                                           <| unpack (trim x))
                    $ splitOn '\n' !(ls ".")
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
                               "list"       => system "ls -d1 C:\\Idris/*/"
                               
                               _            => putStrLn "What?"
            _ => putStrLn "What?"
    else putStrLn "Hi, I am Synthia, I am here to destroy your world, I'm also weird by design"
