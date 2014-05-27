module Main

import Control.Eternal

import Effect.System

newLineFilter : Char -> Bool
newLineFilter '\n' = True

main : IO ()
main = do
    args <- System.getArgs
    if length args > 1 then do
        let Just cmd = args # 1
        ls <- readProcess' "ls ." False
        let files       = split newLineFilter ls
        let ipkgFinder  = filter (\x => isSuffixOf 
                                         (unpack ".ipkg")
                                         (unpack (trim x))) files
        when (length ipkgFinder > 0) $
         do let Just mypkg = ipkgFinder # 0
            putStrLn $ "my ipkg is: " ++ mypkg
            case cmd of
                "install"   => system $ "idris --install " ++ mypkg
                "build"     => system $ "idris --build " ++ mypkg
                _           => putStrLn "What?"
    else putStrLn "Hi, I am Synthia, I am here to destroy your world"
