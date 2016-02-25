module Defects

import Control.Eternal
import Control.IOExcept

import Prelude.Interactive

import Effect.StdIO
import Effect.File
import Effect.System

import Unicode
import Yaml

import Effects

%access public export

{- let start from simple -}
ls : String → ໒ String
ls path = readProcess' ("ls " ++ path) False

{- ETERNAL EFFECT WILL DO LS and stuff in EternalIO -}
data Eternal : Effect where
  LS : String → { () } Eternal String
implementation Handler Eternal IO where
  handle () (LS s) k = do x <- ls s; k x ()
implementation Handler Eternal (IOExcept a) where
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
