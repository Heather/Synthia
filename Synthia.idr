module Main

import Control.Eternal

import Effect.System

main : IO ()
main = System.getArgs >>= \args =>
    if length args > 1 then do
        let ipkgFinder  = filter (\x => isSuffixOf 
                                         (unpack ".ipkg")
                                         (unpack (trim x)))
                           $ splitOn '\n' !(readProcess' "ls ." False)
        when (length ipkgFinder > 0) $
         do let Just mypkg = ipkgFinder # 0
            putStrLn $ "my ipkg is: " ++ mypkg
            case args # 1 of
                Just "install" => system $ "idris --install "  ++ mypkg
                Just "build"   => system $ "idris --build "    ++ mypkg
                _              => putStrLn "What?"
    else putStrLn "Hi, I am Synthia, I am here to destroy your world"
