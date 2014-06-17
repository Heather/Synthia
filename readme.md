Synthia
-------

Package manager, THE WORST...

```shell
>Synthia install Heather/Control.Eternal.Idris

Cloning into 'C:\Idris\Control.Eternal.Idris'...
remote: Reusing existing pack: 221, done.
Receiving objects: 100% (221/221), 20.70 KiB, done.
Resolving deltas: 100% (104/104), done.
Type checking .\Control\Eternal\System\Process.idr
Type checking .\Control\Eternal\System.idr
Type checking .\Control\Eternal\Parse.idr
Type checking .\Control\Eternal\Logic.idr
Type checking .\Control\Eternal\Operators\List.idr
Type checking .\Control\Eternal\Operators\Nat.idr
Type checking .\Control\Eternal\Operators\String.idr
Type checking .\Control\Eternal\Operators\FSharp.idr
Type checking .\Control\Eternal\Operators.idr
Type checking .\Control\Eternal.idr
Installing Control\Eternal.ibc to ....\cabal\idris-
```

```haskell
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
```
