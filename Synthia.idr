module Main

import Control.Eternal
import Effect.System

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
                        let pkg = filter (\x => isSuffixOf <| unpack ".ipkg"
                                                           <| unpack (trim x))
                                     $ splitOn '\n' !(ls repoDir)
                        case (pkg # 0) of
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

main : IO ()
main = System.getArgs >>= \args =>
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
                               
                               _            => putStrLn "What?"
            _ => putStrLn "What?"
    else putStrLn "Hi, I am Synthia, I am here to destroy your world, I'm also weird by design"
