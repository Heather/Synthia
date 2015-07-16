module Main

import Control.Eternal
import Control.IOExcept

import Prelude.Interactive

import Effect.StdIO
import Effect.File
import Effect.System

import Unicode
import Yaml

import Effects

{- let start from simple -}
ls : String → ໒ String
ls path = readProcess' ("ls " ++ path) False

{- ETERNAL EFFECT WILL DO LS and stuff in EternalIO -}
data Eternal : Effect where
  LS : String → { () } Eternal String
instance Handler Eternal IO where
  handle () (LS s) k = do x <- ls s; k x ()
instance Handler Eternal (IOExcept a) where
  handle () (LS s) k = do x <- ioe_lift $ ls s; k x ()

ETERNAL : EFFECT
ETERNAL = MkEff () Eternal

els : String → { [ETERNAL] } ♬ String
els s = call $ LS s

EternalIO : Type → Type → Type
EternalIO st t = { [FILE_IO st, STDIO, SYSTEM, ETERNAL] } ♬ t

{- WE NEED ETERNAL POWER! -}
readFile : EternalIO (OpenFile Read) (List String)
readFile = readAcc [] where
  readAcc : List String -> EternalIO (OpenFile Read) (List String)
  readAcc acc = if (not !eof) then readAcc $ !readLine :: acc
                              else return  $ reverse acc

{- IT'S NOT JUST SYSTEM CALL, IT'S POWERFUL THING!-}
sys : String → { [STDIO, SYSTEM, ETERNAL] } ♬ ()
sys ss = do system ss
            return ()

{- THAT'S HOW NEW PACKAGES IS ISNTALLED -}
finalInstall : String
             → (List String)
             → (List String)
             → { [STDIO, SYSTEM, ETERNAL] } ♬ ()
finalInstall repoDir synss flist =
  case (synss ‼ 0) of
    Just syn => do {- PROCESS PACKAGE INSTALLATION -}
      let truesyn = repoDir ++ syn
      sys $ "pushd " ⧺ repoDir ⧺ " & Synthia --install " ⧺ truesyn

      {- Finishing installation -}
      let makeF = filter (== "Makefile") flist
      case (makeF ‼ 0) of
        Just _ => sys $ "pushd " ⧺ repoDir ⧺ " & make & make install"
        _ => let pkg = filter (λ x → isSuffixOf <| unpack ".ipkg"
                                                <| unpack (trim x)) flist
             in case (pkg ‼ 0) of
                  Just pkg => sys $ "pushd " ⧺ repoDir ⧺ " & idris --install " ⧺ pkg
                  _ => putStrLn "No ipkg in this repository"
    _ => putStrLn "No synthia in this repository"
{-
- I'll not leave you here. I've got to save you.
- You already have, Luke.
-}
install : List String -> (List String) → { [STDIO, SYSTEM, ETERNAL] } ♬ ()
install [] [] = do ➢ "try Synthia install GitHubUser/Repo"
                   ➢ "Note that there should be .syn file"
                   ➢ "Examples: Synthia install Heather/Idris.Yaml"
                   ➢ "          Synthia install Heather/Control.Eternal.Idris"
install [] xs = let Just mypkg = xs ‼ 0
                in sys $ "idris --install " ++ mypkg
install xs _ = do
  let dir = "C:\\Idris\\"
  let Just repo = xs ‼ 0
  case (splitOn '/' (❃ repo)) ‼ 1 of
    Just repx => do
      let reps = ◉ repx
      sys $ "mkdir " ⧺ dir
      let repoDir = dir ⧺ reps ⧺ "\\"
      sys $ "git clone git@github.com:" ⧺ repo ⧺ ".git " ⧺ repoDir
      let flist = splitOn '\n' !(els repoDir)
      {- PROCESS DEP CHECK! .syn SYNTHIA FILES -}
      let synss = filter (λ x → isSuffixOf <| unpack ".syn"
                                           <| unpack (trim x)) flist
      finalInstall repoDir synss flist
    _ => install [] []

{- SYMPLY RUN IDRIS WITH ARGUMENTS -}
goC : (List String)
    → (List String)
    → String
    → { [STDIO, SYSTEM, ETERNAL] } ♬ ()
goC pkg args cc =
  case (pkg # 0) of
    Just mypkg => sys $ cc ++ concat <<| drop 2 args
                           ++ " "
                           ++ mypkg
    _ => putStrLn "No ipkg in this repository"

{- TRUE MAIN -}
procs : (List String)
      → (List String)
      → Bool
      → { [STDIO, SYSTEM, ETERNAL] } ♬ ()
procs args file p =
  let config = concat file {- READ OWN CONFIG FILE -}
  in case parse yamlToplevelValue config of
    Left err => putStrLn ("error: " ++ err)
    Right v  =>
      if p then putStrLn (✪ v) -- TODO: Install finally deps
           else let pkg = filter (λ x → isSuffixOf <| unpack ".ipkg"
                                                   <| unpack (trim x))
                            $ splitOn '\n' !(els ".")
                in case (args ‼ 1) of
                    Just cmd => case cmd of
                      "--help"     => do ➢ "try Synthia install GitHubUser/Repo"
                                         ➢ "Note that there should be .syn file"
                                         ➢ "Examples: Synthia install Heather/Idris.Yaml"
                                         ➢ "          Synthia install Heather/Control.Eternal.Idris"
                      "--version"  => putStrLn "0.0.4"

                      "build"      => goC pkg args "idris --build "
                      "clean"      => goC pkg args "idris --clean "
                      "mkdoc"      => goC pkg args "idris --mkdoc "
                      "checkpkg"   => goC pkg args "idris --checkpkg "
                      "testpkg"    => goC pkg args "idris --testpkg "

                      "install"    => install (drop 2 args) pkg
                      "list"       => sys "ls -d1 C:\\Idris/*/"

                      _            => putStrLn "What?"
                    _ => ➢ "What?"

{- GET SYNTHIA CONFIG AND PROCESS -}
cfg : String → (List String) → EternalIO () ()
cfg f args =
  case (args ‼ 1) of
    Just cmd =>
      case cmd of
        "--install" =>
          case (args ‼ 2) of
            Just syn => case !(open syn Read) of
                          True => do procs args !readFile True
                                     close {- =<< -}
                          False => putStrLn "Error!"
            _ => sys "Synthia install"
        _ => case !(open f Read) of
              True => do procs args !readFile False
                         close {- =<< -}
              False => putStrLn "Error!"
    _ => ➢ "Hi, I am Synthia, I am here to destroy your world, I'm also weird by design"

main : ໒ ()
main = getArgs >>= λ args → run $ cfg "Synthia.syn" args
