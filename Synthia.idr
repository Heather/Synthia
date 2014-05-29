module Main

import Control.Eternal
import Effect.System

main : IO ()
main = System.getArgs >>= \args =>
    if length args > 1 then
        let ipkgFinder  = filter (\x => isSuffixOf <| unpack ".ipkg"
                                                   <| unpack (trim x))
                           $ splitOn '\n' !(readProcess' "ls ." False)
        in when (length ipkgFinder > 0)
                $ let Just mypkg = ipkgFinder # 0
                  in case args # 1 of
                        Just cmd => system $ case cmd of
                                        "install" => "idris --install "
                                        "build"   => "idris --build "
                                       ++ mypkg
                        _ => putStrLn "What?"
    else putStrLn "Hi, I am Synthia, I am here to destroy your world"
