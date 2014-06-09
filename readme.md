Synthia
-------

```haskell
main = System.getArgs >>= \args =>
    if length args > 1 then
        let ipkgFinder = filter (\x => isSuffixOf <| unpack ".ipkg"
                                                   <| unpack (trim x))
                           $ splitOn '\n' !(readProcess' "ls ." False)
        in when (length ipkgFinder > 0)
                $ let Just mypkg = ipkgFinder # 0
                  in case args # 1 of
                        Just cmd => let go = \c => system $ c ++ concat <<| drop 1 args
                                                              ++ " "
                                                              ++ mypkg
                                    in case cmd of
                                           "--help" => putStrLn "No..."
                                           "--version" => putStrLn "0.0.1"
                                           "install" => go "idris --install "
                                           "build" => go "idris --build "
                                           "clean" => go "idris --clean "
                                           _ => putStrLn "What?"
```
