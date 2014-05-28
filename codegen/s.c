#include <readProcess.h>
#include <idris_rts.h>
#include <idris_bitstring.h>
#include <idris_stdfgn.h>
#include <assert.h>
void _idris_Prelude_46_Basics_46__46_(VM*, VAL*);
void _idris_Prelude_46_Monad_46__62__62__61_(VM*, VAL*);
void _idris_FalseElim(VM*, VAL*);
void _idris_Force(VM*, VAL*);
void _idris_Prelude_46_Bool_46_boolElim(VM*, VAL*);
void _idris_Prelude_46_Either_46_choose(VM*, VAL*);
void _idris_Prelude_46_Classes_46_compare(VM*, VAL*);
void _idris_Prelude_46_List_46_filter(VM*, VAL*);
void _idris_Prelude_46_List_46_foldrImpl(VM*, VAL*);
void _idris_System_46_getArgs(VM*, VAL*);
void _idris_Prelude_46_Basics_46_id(VM*, VAL*);
void _idris_Prelude_46_List_46_index_39_(VM*, VAL*);
void _idris_Prelude_46_Classes_46_intToBool(VM*, VAL*);
void _idris_io_95_bind(VM*, VAL*);
void _idris_io_95_return(VM*, VAL*);
void _idris_Prelude_46_List_46_isPrefixOfBy(VM*, VAL*);
void _idris_Prelude_46_Char_46_isSpace(VM*, VAL*);
void _idris_Prelude_46_List_46_length(VM*, VAL*);
void _idris_Prelude_46_Strings_46_ltrim(VM*, VAL*);
void _idris_Main_46_main(VM*, VAL*);
void _idris_Prelude_46_Functor_46_map(VM*, VAL*);
void _idris_mkForeignPrim(VM*, VAL*);
void _idris_mkLazyForeignPrim(VM*, VAL*);
void _idris_Prelude_46_Bool_46_not(VM*, VAL*);
void _idris_prim_95__95_addBigInt(VM*, VAL*);
void _idris_prim_95__95_addInt(VM*, VAL*);
void _idris_prim_95__95_concat(VM*, VAL*);
void _idris_prim_95__95_eqChar(VM*, VAL*);
void _idris_prim_95__95_eqInt(VM*, VAL*);
void _idris_prim_95__95_eqString(VM*, VAL*);
void _idris_prim_95__95_intToChar(VM*, VAL*);
void _idris_prim_95__95_strCons(VM*, VAL*);
void _idris_prim_95__95_strHead(VM*, VAL*);
void _idris_prim_95__95_strRev(VM*, VAL*);
void _idris_prim_95__95_strTail(VM*, VAL*);
void _idris_prim_95_io_95_bind(VM*, VAL*);
void _idris_Prelude_46_Applicative_46_pure(VM*, VAL*);
void _idris_Prelude_46_putStr(VM*, VAL*);
void _idris_Control_46_Eternal_46_System_46_Process_46_readProcess_39_(VM*, VAL*);
void _idris_really_95_believe_95_me(VM*, VAL*);
void _idris_run_95__95_IO(VM*, VAL*);
void _idris_Prelude_46_List_46_span(VM*, VAL*);
void _idris_Prelude_46_List_46_split(VM*, VAL*);
void _idris_Prelude_46_Strings_46_split(VM*, VAL*);
void _idris_Control_46_Eternal_46_System_46_Process_46_system(VM*, VAL*);
void _idris_Prelude_46_Strings_46_unpack(VM*, VAL*);
void _idris_unsafePerformPrimIO(VM*, VAL*);
void _idris_Prelude_46_Applicative_46_when(VM*, VAL*);
void _idris_Prelude_46_Bool_46__124__124_(VM*, VAL*);
void _idris__123_APPLY0_125_(VM*, VAL*);
void _idris__123_EVAL0_125_(VM*, VAL*);
void _idris__123_System_46_getArgs_44__32_ga_39_0_125_(VM*, VAL*);
void _idris_Main_46__123_case_32_block_32_in_32_main0_125_(VM*, VAL*);
void _idris_System_46__123_getArgs0_125_(VM*, VAL*);
void _idris__123_io_95_bind0_125_(VM*, VAL*);
void _idris_Prelude_46_Char_46__123_isSpace0_125_(VM*, VAL*);
void _idris_Main_46__123_main0_125_(VM*, VAL*);
void _idris__123_runMain0_125_(VM*, VAL*);
void _idris_Prelude_46_Strings_46__123_split0_125_(VM*, VAL*);
void _idris_Prelude_46_Char_46__123_isSpace1_125_(VM*, VAL*);
void _idris_Main_46__123_main1_125_(VM*, VAL*);
void _idris_Prelude_46_Char_46__123_isSpace2_125_(VM*, VAL*);
void _idris_Main_46__123_main2_125_(VM*, VAL*);
void _idris_Prelude_46_Char_46__123_isSpace3_125_(VM*, VAL*);
void _idris_Main_46__123_main3_125_(VM*, VAL*);
void _idris_Prelude_46_Char_46__123_isSpace4_125_(VM*, VAL*);
void _idris_Main_46__123_main4_125_(VM*, VAL*);
void _idris_Prelude_46_Char_46__123_isSpace5_125_(VM*, VAL*);
void _idris_Main_46__123_main5_125_(VM*, VAL*);
void _idris_Main_46__123_main6_125_(VM*, VAL*);
void _idris_Main_46__123_main7_125_(VM*, VAL*);
void _idris_Main_46__123_main8_125_(VM*, VAL*);
void _idris_Main_46__123_main9_125_(VM*, VAL*);
void _idris_Main_46__123_main10_125_(VM*, VAL*);
void _idris_Main_46__123_main11_125_(VM*, VAL*);
void _idris_Main_46__123_main12_125_(VM*, VAL*);
void _idris_Main_46__123_main13_125_(VM*, VAL*);
void _idris_Main_46__123_main14_125_(VM*, VAL*);
void _idris_Main_46__123_main15_125_(VM*, VAL*);
void _idris_Main_46__123_main16_125_(VM*, VAL*);
void _idris__123_Prelude_46_Strings_46_strM25_125_(VM*, VAL*);
void _idris__123_Prelude_46_Strings_46_unpack27_125_(VM*, VAL*);
void _idris__123_Prelude_46_Strings_46_ltrim46_125_(VM*, VAL*);
void _idris__123_Prelude_46_Classes_46_Nat_32_instance_32_of_32_Prelude_46_Classes_46_Ord_44__32_method_32__62_67_125_(VM*, VAL*);
void _idris_System_46_getArgs_58_ga_39__58_0(VM*, VAL*);
void _idris_System_46_getArgs_58_getArg_58_0(VM*, VAL*);
void _idris_System_46_getArgs_58_numArgs_58_0(VM*, VAL*);
void _idris_Prelude_46_List_46_reverse_58_reverse_39__58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Char_58__33_decEq_58_0_58_primitiveEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Char_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Float_58__33_decEq_58_0_58_primitiveEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Float_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Int_58__33_decEq_58_0_58_primitiveEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Int_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Integer_58__33_decEq_58_0_58_primitiveEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Integer_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_String_58__33_decEq_58_0_58_primitiveEq_58_0(VM*, VAL*);
void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_String_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM*, VAL*);
void _idris_Prelude_46_Functor_46__64_Prelude_46_Functor_46_Functor_36_List_58__33_map_58_0(VM*, VAL*);
void _idris_Prelude_46_Classes_46__64_Prelude_46_Classes_46_Ord_36_Nat_58__33_compare_58_0(VM*, VAL*);
void _idris__64_Prelude_46_Functor_46_Functor_36_List(VM*, VAL*);
void _idris__64_Prelude_46_Classes_46_Ord_36_Nat(VM*, VAL*);
void _idris_io_95_bind_95_case(VM*, VAL*);
void _idris_Main_46_main_95_case(VM*, VAL*);
void _idris_Prelude_46_List_46_span_95_case(VM*, VAL*);
void _idris_Prelude_46_List_46_split_95_case(VM*, VAL*);
void _idris_Main_46_main_95_case_95_case(VM*, VAL*);
void _idris_Prelude_46_Basics_46__46_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(6);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_Prelude_46_Monad_46__62__62__61_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(4) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_FalseElim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Force(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(1);
    TOP(0) = LOC(2);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris__123_EVAL0_125_);
}

void _idris_Prelude_46_Bool_46_boolElim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 4, 0);
        RESERVE(1);
        TOP(0) = LOC(3);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL0_125_);
    }
    else {
        PROJECT(vm, LOC(1), 4, 0);
        RESERVE(1);
        TOP(0) = LOC(2);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL0_125_);
    }
}

void _idris_Prelude_46_Either_46_choose(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 1, 0);
        allocCon(REG1, vm, 1,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(0), 1, 0);
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_Classes_46_compare(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(1);
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_List_46_filter(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        RESERVE(2);
        TOP(0) = LOC(1);
        TOP(1) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(5) = RVAL;
        if (CTAG(LOC(5)) == 0) {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(6) = NULL;
            RESERVE(3);
            TOP(0) = LOC(6);
            TOP(1) = LOC(1);
            TOP(2) = LOC(4);
            SLIDE(vm, 3);
            TOPBASE(3);
            TAILCALL(_idris_Prelude_46_List_46_filter);
        }
        else {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(6) = NULL;
            RESERVE(3);
            TOP(0) = LOC(6);
            TOP(1) = LOC(1);
            TOP(2) = LOC(4);
            STOREOLD;
            BASETOP(0);
            ADDTOP(3);
            CALL(_idris_Prelude_46_List_46_filter);
            LOC(6) = RVAL;
            allocCon(REG1, vm, 1,2, 0);
            SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(6)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
    }
    else {
        PROJECT(vm, LOC(2), 3, 0);
        RVAL = LOC(2);
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_List_46_foldrImpl(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(8);
    ADDTOP(8);
    if (CTAG(LOC(5)) == 1) {
        PROJECT(vm, LOC(5), 6, 2);
        LOC(8) = NULL;
        LOC(9) = NULL;
        LOC(10) = NULL;
        LOC(11) = NULL;
        LOC(12) = NULL;
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(6);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(13) = RVAL;
        allocCon(REG1, vm, 65659,5, 0);
        SETARG(REG1, 0, LOC(10)); SETARG(REG1, 1, LOC(11)); SETARG(REG1, 2, LOC(12)); SETARG(REG1, 3, LOC(4)); SETARG(REG1, 4, LOC(13)); 
        LOC(10) = REG1;
        RESERVE(6);
        TOP(0) = LOC(8);
        TOP(1) = LOC(9);
        TOP(2) = LOC(2);
        TOP(3) = LOC(3);
        TOP(4) = LOC(10);
        TOP(5) = LOC(7);
        SLIDE(vm, 6);
        TOPBASE(6);
        TAILCALL(_idris_Prelude_46_List_46_foldrImpl);
    }
    else {
        PROJECT(vm, LOC(5), 6, 0);
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(3);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_APPLY0_125_);
    }
}

void _idris_System_46_getArgs(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    LOC(0) = NULL;
    LOC(1) = NULL;
    allocCon(REG1, vm, 65665,0, 0);
    
    LOC(2) = REG1;
    allocCon(REG1, vm, 65666,0, 0);
    
    LOC(3) = REG1;
    allocCon(REG1, vm, 65667,4, 0);
    SETARG(REG1, 0, LOC(0)); SETARG(REG1, 1, LOC(1)); SETARG(REG1, 2, LOC(2)); SETARG(REG1, 3, LOC(3)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Basics_46_id(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(1);
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_List_46_index_39_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        if (bigEqConst(LOC(1), 0)) {
            allocCon(REG1, vm, 1,1, 0);
            SETARG(REG1, 0, LOC(3)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        } else
        {
            LOC(5) = MKINT(1);
            LOC(5) = idris_bigMinus(vm, LOC(1), LOC(5));
            LOC(6) = NULL;
            RESERVE(3);
            TOP(0) = LOC(6);
            TOP(1) = LOC(5);
            TOP(2) = LOC(4);
            SLIDE(vm, 3);
            TOPBASE(3);
            TAILCALL(_idris_Prelude_46_List_46_index_39_);
        }
    }
    else {
        PROJECT(vm, LOC(2), 3, 0);
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_Classes_46_intToBool(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (GETINT(LOC(0)) == 0) {
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    {
        allocCon(REG1, vm, 1,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_io_95_bind(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    LOC(5) = NULL;
    LOC(6) = NULL;
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(4);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(7) = RVAL;
    allocCon(REG1, vm, 65671,2, 0);
    SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(3)); 
    LOC(8) = REG1;
    RESERVE(4);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    TOP(2) = LOC(7);
    TOP(3) = LOC(8);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_prim_95_io_95_bind);
}

void _idris_io_95_return(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(1);
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_List_46_isPrefixOfBy(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(6);
    ADDTOP(6);
    if (CTAG(LOC(2)) == 0) {
        PROJECT(vm, LOC(2), 4, 0);
        allocCon(REG1, vm, 1,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        if (CTAG(LOC(3)) == 1) {
            PROJECT(vm, LOC(3), 4, 2);
{
                PROJECT(vm, LOC(2), 6, 2);
                RESERVE(2);
                TOP(0) = LOC(1);
                TOP(1) = LOC(6);
                STOREOLD;
                BASETOP(0);
                ADDTOP(2);
                CALL(_idris__123_APPLY0_125_);
                LOC(8) = RVAL;
                RESERVE(2);
                TOP(0) = LOC(8);
                TOP(1) = LOC(4);
                STOREOLD;
                BASETOP(0);
                ADDTOP(2);
                CALL(_idris__123_APPLY0_125_);
                LOC(8) = RVAL;
                if (CTAG(LOC(8)) == 0) {
                    PROJECT(vm, LOC(8), 9, 0);
                    allocCon(REG1, vm, 0,0, 0);
                    
                    RVAL = REG1;
                    TOPBASE(0);
                    REBASE;
                }
                else {
                    PROJECT(vm, LOC(8), 9, 0);
                    LOC(9) = NULL;
                    RESERVE(4);
                    TOP(0) = LOC(9);
                    TOP(1) = LOC(1);
                    TOP(2) = LOC(7);
                    TOP(3) = LOC(5);
                    SLIDE(vm, 4);
                    TOPBASE(4);
                    TAILCALL(_idris_Prelude_46_List_46_isPrefixOfBy);
                }
            }
        }
        else {
            PROJECT(vm, LOC(3), 4, 0);
            allocCon(REG1, vm, 0,0, 0);
            
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
    }
}

void _idris_Prelude_46_Char_46_isSpace(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    LOC(1) = MKINT(32);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(1) = RVAL;
    allocCon(REG1, vm, 65632,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Bool_46__124__124_);
    LOC(1) = RVAL;
    allocCon(REG1, vm, 65633,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Bool_46__124__124_);
    LOC(1) = RVAL;
    allocCon(REG1, vm, 65634,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Bool_46__124__124_);
    LOC(1) = RVAL;
    allocCon(REG1, vm, 65635,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Bool_46__124__124_);
    LOC(1) = RVAL;
    allocCon(REG1, vm, 65636,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Bool_46__124__124_);
    LOC(1) = RVAL;
    allocCon(REG1, vm, 65637,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris_Prelude_46_Bool_46__124__124_);
}

void _idris_Prelude_46_List_46_length(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 2);
        LOC(4) = MKINT(1);
        LOC(5) = NULL;
        RESERVE(2);
        TOP(0) = LOC(5);
        TOP(1) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_List_46_length);
        LOC(5) = RVAL;
        RVAL = idris_bigPlus(vm, LOC(4), LOC(5));
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = MKINT(0);
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_Strings_46_ltrim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    LOC(1) = NULL;
    LOC(2) = MKSTR(vm, "");
    LOC(2) = idris_streq(vm, LOC(0), LOC(2));
    RESERVE(1);
    TOP(0) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(2) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(2) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(2) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(0);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(2) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
}

void _idris_Main_46_main(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    LOC(0) = NULL;
    LOC(1) = NULL;
    STOREOLD;
    BASETOP(0);
    CALL(_idris_System_46_getArgs);
    LOC(2) = RVAL;
    allocCon(REG1, vm, 65648,0, 0);
    
    LOC(3) = REG1;
    allocCon(REG1, vm, 65667,4, 0);
    SETARG(REG1, 0, LOC(0)); SETARG(REG1, 1, LOC(1)); SETARG(REG1, 2, LOC(2)); SETARG(REG1, 3, LOC(3)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Functor_46_map(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(4) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_mkForeignPrim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_mkLazyForeignPrim(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Bool_46_not(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 1, 0);
        allocCon(REG1, vm, 1,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(0), 1, 0);
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_prim_95__95_addBigInt(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_bigPlus(vm, LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_addInt(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = ADD(LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_concat(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_concat(vm, LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_eqChar(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = INTOP(==,LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_eqInt(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = INTOP(==,LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_eqString(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_streq(vm, LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_intToChar(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(0);
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_strCons(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strCons(vm, LOC(0),LOC(1));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_strHead(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strHead(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_strRev(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strRev(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95__95_strTail(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strTail(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void _idris_prim_95_io_95_bind(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_Prelude_46_Applicative_46_pure(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(1);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_Prelude_46_putStr(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    putStr(GETSTR(LOC(0)));
    TOPBASE(0);
    REBASE;
}

void _idris_Control_46_Eternal_46_System_46_Process_46_readProcess_39_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 3, 0);
        LOC(3) = MKINT(0);
    }
    else {
        PROJECT(vm, LOC(1), 3, 0);
        LOC(3) = MKINT(1);
    }
    LOC(3) = LOC(3);
    RVAL = MKSTR(vm, readProcessQ(GETSTR(LOC(0)),GETINT(LOC(3))));
    TOPBASE(0);
    REBASE;
}

void _idris_really_95_believe_95_me(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(2);
    TOPBASE(0);
    REBASE;
}

void _idris_run_95__95_IO(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 0,0, 0);
    
    LOC(1) = REG1;
    RESERVE(2);
    TOP(0) = LOC(0);
    TOP(1) = LOC(1);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_Prelude_46_List_46_span(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(7);
    ADDTOP(7);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        RESERVE(2);
        TOP(0) = LOC(1);
        TOP(1) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(5) = RVAL;
        if (CTAG(LOC(5)) == 0) {
            PROJECT(vm, LOC(5), 6, 0);
            allocCon(REG1, vm, 0,0, 0);
            
            LOC(6) = REG1;
            allocCon(REG1, vm, 0,2, 0);
            SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(2)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
        else {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(6) = NULL;
            LOC(7) = NULL;
            LOC(8) = NULL;
            LOC(9) = NULL;
            RESERVE(3);
            TOP(0) = LOC(9);
            TOP(1) = LOC(1);
            TOP(2) = LOC(4);
            STOREOLD;
            BASETOP(0);
            ADDTOP(3);
            CALL(_idris_Prelude_46_List_46_span);
            LOC(9) = RVAL;
            RESERVE(5);
            TOP(0) = LOC(6);
            TOP(1) = LOC(7);
            TOP(2) = LOC(3);
            TOP(3) = LOC(8);
            TOP(4) = LOC(9);
            SLIDE(vm, 5);
            TOPBASE(5);
            TAILCALL(_idris_Prelude_46_List_46_span_95_case);
        }
    }
    else {
        PROJECT(vm, LOC(2), 3, 0);
        allocCon(REG1, vm, 0,2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(2)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_List_46_split(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(7);
    ADDTOP(7);
    LOC(3) = NULL;
    LOC(4) = NULL;
    LOC(5) = NULL;
    LOC(6) = NULL;
    LOC(7) = NULL;
    LOC(8) = NULL;
    allocCon(REG1, vm, 65661,0, 0);
    
    LOC(9) = REG1;
    allocCon(REG1, vm, 65659,5, 0);
    SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); SETARG(REG1, 2, LOC(8)); SETARG(REG1, 3, LOC(9)); SETARG(REG1, 4, LOC(1)); 
    LOC(6) = REG1;
    RESERVE(3);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    TOP(2) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_span);
    LOC(5) = RVAL;
    RESERVE(4);
    TOP(0) = LOC(3);
    TOP(1) = LOC(1);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_List_46_split_95_case);
}

void _idris_Prelude_46_Strings_46_split(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(10);
    ADDTOP(10);
    LOC(2) = NULL;
    LOC(3) = NULL;
    allocCon(REG1, vm, 65662,0, 0);
    
    LOC(4) = REG1;
    LOC(5) = NULL;
    LOC(6) = NULL;
    LOC(7) = NULL;
    LOC(8) = NULL;
    LOC(9) = NULL;
    LOC(10) = NULL;
    allocCon(REG1, vm, 65661,0, 0);
    
    LOC(11) = REG1;
    allocCon(REG1, vm, 65659,5, 0);
    SETARG(REG1, 0, LOC(8)); SETARG(REG1, 1, LOC(9)); SETARG(REG1, 2, LOC(10)); SETARG(REG1, 3, LOC(11)); SETARG(REG1, 4, LOC(0)); 
    LOC(8) = REG1;
    LOC(9) = NULL;
    LOC(10) = MKSTR(vm, "");
    LOC(10) = idris_streq(vm, LOC(1), LOC(10));
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_unpack27_125_);
    LOC(9) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    TOP(2) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_span);
    LOC(7) = RVAL;
    RESERVE(4);
    TOP(0) = LOC(5);
    TOP(1) = LOC(0);
    TOP(2) = LOC(6);
    TOP(3) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(4);
    CALL(_idris_Prelude_46_List_46_split_95_case);
    LOC(5) = RVAL;
    RESERVE(4);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_Functor_46__64_Prelude_46_Functor_46_Functor_36_List_58__33_map_58_0);
}

void _idris_Control_46_Eternal_46_System_46_Process_46_system(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    system(GETSTR(LOC(0)));
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Strings_46_unpack(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    LOC(1) = NULL;
    LOC(2) = MKSTR(vm, "");
    LOC(2) = idris_streq(vm, LOC(0), LOC(2));
    RESERVE(1);
    TOP(0) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(2) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(2) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(2) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(0);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(2) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_Prelude_46_Strings_46_unpack27_125_);
}

void _idris_unsafePerformPrimIO(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Applicative_46_when(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    if (CTAG(LOC(2)) == 0) {
        PROJECT(vm, LOC(2), 4, 0);
        LOC(4) = NULL;
        LOC(5) = NULL;
        RESERVE(3);
        TOP(0) = LOC(4);
        TOP(1) = LOC(5);
        TOP(2) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(3);
        CALL(_idris_Prelude_46_Applicative_46_pure);
        LOC(4) = RVAL;
        allocCon(REG1, vm, 0,0, 0);
        
        LOC(5) = REG1;
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(5);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_APPLY0_125_);
    }
    else {
        PROJECT(vm, LOC(2), 4, 0);
        RESERVE(1);
        TOP(0) = LOC(3);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL0_125_);
    }
}

void _idris_Prelude_46_Bool_46__124__124_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL0_125_);
    }
    else {
        PROJECT(vm, LOC(0), 2, 0);
        allocCon(REG1, vm, 1,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris__123_APPLY0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(5);
    ADDTOP(5);
    switch(TAG(LOC(0))) {
    case 65638:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_Control_46_Eternal_46_System_46_Process_46_readProcess_39_);
        break;
    case 65639:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Control_46_Eternal_46_System_46_Process_46_system);
        break;
    case 65640:
        PROJECT(vm, LOC(0), 2, 3);
        RESERVE(4);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        TOP(3) = LOC(1);
        SLIDE(vm, 4);
        TOPBASE(4);
        TAILCALL(_idris__64_Prelude_46_Functor_46_Functor_36_List);
        break;
    case 65641:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_Main_46__123_case_32_block_32_in_32_main0_125_);
        break;
    case 65642:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main0_125_);
        break;
    case 65643:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Main_46__123_main10_125_);
        break;
    case 65644:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main11_125_);
        break;
    case 65645:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main12_125_);
        break;
    case 65646:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main13_125_);
        break;
    case 65647:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Main_46__123_main15_125_);
        break;
    case 65648:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main16_125_);
        break;
    case 65649:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main1_125_);
        break;
    case 65650:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Main_46__123_main2_125_);
        break;
    case 65651:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main3_125_);
        break;
    case 65652:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main4_125_);
        break;
    case 65653:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main5_125_);
        break;
    case 65654:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Main_46__123_main6_125_);
        break;
    case 65655:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main7_125_);
        break;
    case 65656:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main8_125_);
        break;
    case 65657:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main9_125_);
        break;
    case 65658:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__64_Prelude_46_Classes_46_Ord_36_Nat);
        break;
    case 65659:
        PROJECT(vm, LOC(0), 2, 5);
        RESERVE(6);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        TOP(3) = LOC(5);
        TOP(4) = LOC(6);
        TOP(5) = LOC(1);
        SLIDE(vm, 6);
        TOPBASE(6);
        TAILCALL(_idris_Prelude_46_Basics_46__46_);
        break;
    case 65660:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Prelude_46_Basics_46_id);
        break;
    case 65661:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Bool_46_not);
        break;
    case 65662:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Strings_46__123_split0_125_);
        break;
    case 65663:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Prelude_46_putStr);
        break;
    case 65664:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_System_46_getArgs_58_getArg_58_0);
        break;
    case 65665:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_System_46_getArgs_58_numArgs_58_0);
        break;
    case 65666:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_System_46__123_getArgs0_125_);
        break;
    case 65667:
        PROJECT(vm, LOC(0), 2, 4);
        RESERVE(5);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        TOP(3) = LOC(5);
        TOP(4) = LOC(1);
        SLIDE(vm, 5);
        TOPBASE(5);
        TAILCALL(_idris_io_95_bind);
        break;
    case 65668:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_io_95_return);
        break;
    case 65669:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_prim_95__95_strCons);
        break;
    case 65670:
        PROJECT(vm, LOC(0), 2, 3);
        RESERVE(4);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        TOP(3) = LOC(1);
        SLIDE(vm, 4);
        TOPBASE(4);
        TAILCALL(_idris__123_System_46_getArgs_44__32_ga_39_0_125_);
        break;
    case 65671:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris__123_io_95_bind0_125_);
        break;
    case 65672:
        PROJECT(vm, LOC(0), 2, 2);
        allocCon(REG1, vm, 65640,3, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(3)); SETARG(REG1, 2, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    case 65673:
        PROJECT(vm, LOC(0), 2, 0);
        allocCon(REG1, vm, 65658,1, 0);
        SETARG(REG1, 0, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    case 65674:
        PROJECT(vm, LOC(0), 2, 0);
        allocCon(REG1, vm, 65669,1, 0);
        SETARG(REG1, 0, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    case 65675:
        PROJECT(vm, LOC(0), 2, 1);
        allocCon(REG1, vm, 65672,2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    case 65676:
        PROJECT(vm, LOC(0), 2, 0);
        allocCon(REG1, vm, 65675,1, 0);
        SETARG(REG1, 0, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    default:
        RVAL = NULL;
        TOPBASE(0);
        REBASE;
        break;
    }
}

void _idris__123_EVAL0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    switch(TAG(LOC(0))) {
    case 65631:
        PROJECT(vm, LOC(0), 1, 2);
        RESERVE(2);
        TOP(0) = LOC(1);
        TOP(1) = LOC(2);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Main_46__123_main14_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    case 65632:
        PROJECT(vm, LOC(0), 1, 1);
        RESERVE(1);
        TOP(0) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46__123_isSpace0_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    case 65633:
        PROJECT(vm, LOC(0), 1, 1);
        RESERVE(1);
        TOP(0) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46__123_isSpace1_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    case 65634:
        PROJECT(vm, LOC(0), 1, 1);
        RESERVE(1);
        TOP(0) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46__123_isSpace2_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    case 65635:
        PROJECT(vm, LOC(0), 1, 1);
        RESERVE(1);
        TOP(0) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46__123_isSpace3_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    case 65636:
        PROJECT(vm, LOC(0), 1, 1);
        RESERVE(1);
        TOP(0) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46__123_isSpace4_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    case 65637:
        PROJECT(vm, LOC(0), 1, 1);
        RESERVE(1);
        TOP(0) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46__123_isSpace5_125_);
        LOC(0) = RVAL;
        TOPBASE(0);
        REBASE;
        break;
    default:
        RVAL = LOC(0);
        TOPBASE(0);
        REBASE;
        break;
    }
}

void _idris__123_System_46_getArgs_44__32_ga_39_0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    allocCon(REG1, vm, 1,2, 0);
    SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(0)); 
    LOC(4) = REG1;
    LOC(5) = MKINT(1);
    LOC(5) = ADD(LOC(1), LOC(5));
    RESERVE(3);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(2);
    SLIDE(vm, 3);
    TOPBASE(3);
    TAILCALL(_idris_System_46_getArgs_58_ga_39__58_0);
}

void _idris_Main_46__123_case_32_block_32_in_32_main0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(10);
    ADDTOP(10);
    LOC(3) = NULL;
    LOC(4) = NULL;
    LOC(5) = NULL;
    LOC(6) = NULL;
    LOC(7) = NULL;
    LOC(8) = NULL;
    LOC(9) = NULL;
    LOC(10) = NULL;
    LOC(11) = NULL;
    LOC(12) = MKINT(1);
    RESERVE(3);
    TOP(0) = LOC(11);
    TOP(1) = LOC(12);
    TOP(2) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_index_39_);
    LOC(11) = RVAL;
    RESERVE(10);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    TOP(2) = LOC(5);
    TOP(3) = LOC(6);
    TOP(4) = LOC(7);
    TOP(5) = LOC(8);
    TOP(6) = LOC(0);
    TOP(7) = LOC(9);
    TOP(8) = LOC(10);
    TOP(9) = LOC(11);
    SLIDE(vm, 10);
    TOPBASE(10);
    TAILCALL(_idris_Main_46_main_95_case_95_case);
}

void _idris_System_46__123_getArgs0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    allocCon(REG1, vm, 0,0, 0);
    
    LOC(1) = REG1;
    LOC(2) = MKINT(0);
    RESERVE(3);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    TOP(2) = LOC(0);
    SLIDE(vm, 3);
    TOPBASE(3);
    TAILCALL(_idris_System_46_getArgs_58_ga_39__58_0);
}

void _idris__123_io_95_bind0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(6);
    ADDTOP(6);
    LOC(3) = NULL;
    LOC(4) = NULL;
    LOC(5) = NULL;
    LOC(6) = NULL;
    LOC(7) = NULL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(8) = RVAL;
    RESERVE(7);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    TOP(2) = LOC(5);
    TOP(3) = LOC(6);
    TOP(4) = LOC(0);
    TOP(5) = LOC(7);
    TOP(6) = LOC(8);
    SLIDE(vm, 7);
    TOPBASE(7);
    TAILCALL(_idris_io_95_bind_95_case);
}

void _idris_Prelude_46_Char_46__123_isSpace0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(9);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = NULL;
    allocCon(REG1, vm, 65668,2, 0);
    SETARG(REG1, 0, LOC(1)); SETARG(REG1, 1, LOC(0)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris__123_runMain0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    STOREOLD;
    BASETOP(0);
    CALL(_idris_Main_46_main);
    LOC(0) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(0);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_run_95__95_IO);
    LOC(0) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(0);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris__123_EVAL0_125_);
}

void _idris_Prelude_46_Strings_46__123_split0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(5);
    ADDTOP(5);
    LOC(1) = NULL;
    LOC(2) = NULL;
    allocCon(REG1, vm, 65674,0, 0);
    
    LOC(3) = REG1;
    LOC(4) = MKSTR(vm, "");
    LOC(5) = NULL;
    allocCon(REG1, vm, 65660,1, 0);
    SETARG(REG1, 0, LOC(5)); 
    LOC(5) = REG1;
    RESERVE(6);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    TOP(2) = LOC(3);
    TOP(3) = LOC(4);
    TOP(4) = LOC(5);
    TOP(5) = LOC(0);
    SLIDE(vm, 6);
    TOPBASE(6);
    TAILCALL(_idris_Prelude_46_List_46_foldrImpl);
}

void _idris_Prelude_46_Char_46__123_isSpace1_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(13);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main1_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 65642,0, 0);
    
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Char_46__123_isSpace2_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(10);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main2_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(2) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(2);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Prelude_46_Char_46__123_isSpace3_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(12);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main3_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 65650,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Char_46__123_isSpace4_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(11);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main4_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(13);
    ADDTOP(13);
    LOC(1) = NULL;
    allocCon(REG1, vm, 65651,0, 0);
    
    LOC(2) = REG1;
    LOC(3) = NULL;
    allocCon(REG1, vm, 0,0, 0);
    
    LOC(4) = REG1;
    LOC(5) = NULL;
    LOC(6) = MKSTR(vm, ".ipkg");
    allocCon(REG1, vm, 1,0, 0);
    
    LOC(7) = REG1;
    RESERVE(1);
    TOP(0) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(7) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_unpack27_125_);
    LOC(5) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    TOP(2) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_reverse_58_reverse_39__58_0);
    LOC(3) = RVAL;
    LOC(4) = NULL;
    allocCon(REG1, vm, 0,0, 0);
    
    LOC(5) = REG1;
    LOC(6) = NULL;
    LOC(7) = NULL;
    LOC(8) = NULL;
    LOC(9) = idris_strRev(vm, LOC(0));
    LOC(10) = idris_strRev(vm, LOC(0));
    LOC(11) = MKSTR(vm, "");
    LOC(10) = idris_streq(vm, LOC(10), LOC(11));
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(9) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(8) = RVAL;
    LOC(8) = idris_strRev(vm, LOC(8));
    LOC(9) = NULL;
    LOC(10) = idris_strRev(vm, LOC(0));
    LOC(11) = idris_strRev(vm, LOC(0));
    LOC(12) = MKSTR(vm, "");
    LOC(11) = idris_streq(vm, LOC(11), LOC(12));
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(11) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(10);
    TOP(1) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(9) = RVAL;
    LOC(9) = idris_strRev(vm, LOC(9));
    LOC(10) = MKSTR(vm, "");
    LOC(9) = idris_streq(vm, LOC(9), LOC(10));
    RESERVE(1);
    TOP(0) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(9) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(9) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(9) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(8) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(7) = RVAL;
    LOC(8) = NULL;
    LOC(9) = NULL;
    LOC(10) = idris_strRev(vm, LOC(0));
    LOC(11) = idris_strRev(vm, LOC(0));
    LOC(12) = MKSTR(vm, "");
    LOC(11) = idris_streq(vm, LOC(11), LOC(12));
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(11) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(10);
    TOP(1) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(9) = RVAL;
    LOC(9) = idris_strRev(vm, LOC(9));
    LOC(10) = NULL;
    LOC(11) = idris_strRev(vm, LOC(0));
    LOC(12) = idris_strRev(vm, LOC(0));
    LOC(13) = MKSTR(vm, "");
    LOC(12) = idris_streq(vm, LOC(12), LOC(13));
    RESERVE(1);
    TOP(0) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(12) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(12) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(12) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(11);
    TOP(1) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(11) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(10);
    TOP(1) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(10) = RVAL;
    LOC(10) = idris_strRev(vm, LOC(10));
    LOC(11) = MKSTR(vm, "");
    LOC(10) = idris_streq(vm, LOC(10), LOC(11));
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(9) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(8) = RVAL;
    LOC(9) = MKSTR(vm, "");
    LOC(8) = idris_streq(vm, LOC(8), LOC(9));
    RESERVE(1);
    TOP(0) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(8) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(8) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(8) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(7) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_unpack27_125_);
    LOC(6) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_reverse_58_reverse_39__58_0);
    LOC(4) = RVAL;
    RESERVE(4);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    TOP(2) = LOC(3);
    TOP(3) = LOC(4);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_List_46_isPrefixOfBy);
}

void _idris_Prelude_46_Char_46__123_isSpace5_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(160);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main5_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(10);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main6_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    LOC(2) = NULL;
    LOC(3) = NULL;
    allocCon(REG1, vm, 65667,4, 0);
    SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(3)); SETARG(REG1, 2, LOC(0)); SETARG(REG1, 3, LOC(1)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Main_46__123_main7_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 65654,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Main_46__123_main8_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 65655,0, 0);
    
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Main_46__123_main9_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 65656,0, 0);
    
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Main_46__123_main10_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(2) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(2);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main11_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    allocCon(REG1, vm, 65643,1, 0);
    SETARG(REG1, 0, LOC(0)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void _idris_Main_46__123_main12_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(13);
    ADDTOP(13);
    LOC(1) = NULL;
    allocCon(REG1, vm, 65644,0, 0);
    
    LOC(2) = REG1;
    LOC(3) = NULL;
    allocCon(REG1, vm, 0,0, 0);
    
    LOC(4) = REG1;
    LOC(5) = NULL;
    LOC(6) = MKSTR(vm, ".ipkg");
    allocCon(REG1, vm, 1,0, 0);
    
    LOC(7) = REG1;
    RESERVE(1);
    TOP(0) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(7) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_unpack27_125_);
    LOC(5) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    TOP(2) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_reverse_58_reverse_39__58_0);
    LOC(3) = RVAL;
    LOC(4) = NULL;
    allocCon(REG1, vm, 0,0, 0);
    
    LOC(5) = REG1;
    LOC(6) = NULL;
    LOC(7) = NULL;
    LOC(8) = NULL;
    LOC(9) = idris_strRev(vm, LOC(0));
    LOC(10) = idris_strRev(vm, LOC(0));
    LOC(11) = MKSTR(vm, "");
    LOC(10) = idris_streq(vm, LOC(10), LOC(11));
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(9) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(8) = RVAL;
    LOC(8) = idris_strRev(vm, LOC(8));
    LOC(9) = NULL;
    LOC(10) = idris_strRev(vm, LOC(0));
    LOC(11) = idris_strRev(vm, LOC(0));
    LOC(12) = MKSTR(vm, "");
    LOC(11) = idris_streq(vm, LOC(11), LOC(12));
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(11) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(10);
    TOP(1) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(9) = RVAL;
    LOC(9) = idris_strRev(vm, LOC(9));
    LOC(10) = MKSTR(vm, "");
    LOC(9) = idris_streq(vm, LOC(9), LOC(10));
    RESERVE(1);
    TOP(0) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(9) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(9) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(9) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(8) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(7) = RVAL;
    LOC(8) = NULL;
    LOC(9) = NULL;
    LOC(10) = idris_strRev(vm, LOC(0));
    LOC(11) = idris_strRev(vm, LOC(0));
    LOC(12) = MKSTR(vm, "");
    LOC(11) = idris_streq(vm, LOC(11), LOC(12));
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(11) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(11) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(10);
    TOP(1) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(9) = RVAL;
    LOC(9) = idris_strRev(vm, LOC(9));
    LOC(10) = NULL;
    LOC(11) = idris_strRev(vm, LOC(0));
    LOC(12) = idris_strRev(vm, LOC(0));
    LOC(13) = MKSTR(vm, "");
    LOC(12) = idris_streq(vm, LOC(12), LOC(13));
    RESERVE(1);
    TOP(0) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(12) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(12) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(12) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(11);
    TOP(1) = LOC(12);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(11) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(10);
    TOP(1) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(10) = RVAL;
    LOC(10) = idris_strRev(vm, LOC(10));
    LOC(11) = MKSTR(vm, "");
    LOC(10) = idris_streq(vm, LOC(10), LOC(11));
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(10) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(10) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(9) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_ltrim46_125_);
    LOC(8) = RVAL;
    LOC(9) = MKSTR(vm, "");
    LOC(8) = idris_streq(vm, LOC(8), LOC(9));
    RESERVE(1);
    TOP(0) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(8) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Bool_46_not);
    LOC(8) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Either_46_choose);
    LOC(8) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_strM25_125_);
    LOC(7) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_Prelude_46_Strings_46_unpack27_125_);
    LOC(6) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_reverse_58_reverse_39__58_0);
    LOC(4) = RVAL;
    RESERVE(4);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    TOP(2) = LOC(3);
    TOP(3) = LOC(4);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_List_46_isPrefixOfBy);
}

void _idris_Main_46__123_main13_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(10);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    RESERVE(1);
    TOP(0) = LOC(1);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris_Prelude_46_Classes_46_intToBool);
}

void _idris_Main_46__123_main14_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(10);
    ADDTOP(10);
    LOC(2) = NULL;
    allocCon(REG1, vm, 65657,0, 0);
    
    LOC(3) = REG1;
    LOC(4) = NULL;
    LOC(5) = NULL;
    LOC(6) = NULL;
    LOC(7) = NULL;
    LOC(8) = MKINT(0);
    LOC(9) = NULL;
    allocCon(REG1, vm, 65645,0, 0);
    
    LOC(10) = REG1;
    allocCon(REG1, vm, 65646,0, 0);
    
    LOC(11) = REG1;
    RESERVE(2);
    TOP(0) = LOC(11);
    TOP(1) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Strings_46_split);
    LOC(11) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(9);
    TOP(1) = LOC(10);
    TOP(2) = LOC(11);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_filter);
    LOC(9) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    TOP(2) = LOC(9);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_index_39_);
    LOC(7) = RVAL;
    RESERVE(7);
    TOP(0) = LOC(2);
    TOP(1) = LOC(0);
    TOP(2) = LOC(3);
    TOP(3) = LOC(4);
    TOP(4) = LOC(5);
    TOP(5) = LOC(6);
    TOP(6) = LOC(7);
    SLIDE(vm, 7);
    TOPBASE(7);
    TAILCALL(_idris_Main_46_main_95_case);
}

void _idris_Main_46__123_main15_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(7);
    ADDTOP(7);
    LOC(2) = NULL;
    allocCon(REG1, vm, 65649,0, 0);
    
    LOC(3) = REG1;
    LOC(4) = NULL;
    allocCon(REG1, vm, 65673,0, 0);
    
    LOC(5) = REG1;
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Classes_46_compare);
    LOC(4) = RVAL;
    LOC(5) = NULL;
    LOC(6) = NULL;
    allocCon(REG1, vm, 65652,0, 0);
    
    LOC(7) = REG1;
    allocCon(REG1, vm, 65653,0, 0);
    
    LOC(8) = REG1;
    RESERVE(2);
    TOP(0) = LOC(8);
    TOP(1) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Strings_46_split);
    LOC(8) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(6);
    TOP(1) = LOC(7);
    TOP(2) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_filter);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_List_46_length);
    LOC(5) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(4) = RVAL;
    LOC(5) = MKINT(0);
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(4) = RVAL;
    LOC(5) = NULL;
    LOC(6) = NULL;
    RESERVE(3);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris__123_Prelude_46_Classes_46_Nat_32_instance_32_of_32_Prelude_46_Classes_46_Ord_44__32_method_32__62_67_125_);
    LOC(4) = RVAL;
    allocCon(REG1, vm, 65631,2, 0);
    SETARG(REG1, 0, LOC(0)); SETARG(REG1, 1, LOC(1)); 
    LOC(5) = REG1;
    RESERVE(4);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_Applicative_46_when);
}

void _idris_Main_46__123_main16_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(5);
    ADDTOP(5);
    LOC(1) = NULL;
    allocCon(REG1, vm, 65673,0, 0);
    
    LOC(2) = REG1;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Classes_46_compare);
    LOC(1) = RVAL;
    LOC(2) = NULL;
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(0);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_List_46_length);
    LOC(2) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(1) = RVAL;
    LOC(2) = MKINT(1);
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY0_125_);
    LOC(1) = RVAL;
    LOC(2) = NULL;
    LOC(3) = NULL;
    RESERVE(3);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    TOP(2) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris__123_Prelude_46_Classes_46_Nat_32_instance_32_of_32_Prelude_46_Classes_46_Ord_44__32_method_32__62_67_125_);
    LOC(1) = RVAL;
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = MKSTR(vm, "Hi, I am Synthia, I am here to destroy your world""\x0a""");
        allocCon(REG1, vm, 65663,1, 0);
        SETARG(REG1, 0, LOC(2)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = NULL;
        LOC(3) = NULL;
        LOC(4) = MKSTR(vm, "ls .");
        allocCon(REG1, vm, 0,0, 0);
        
        LOC(5) = REG1;
        allocCon(REG1, vm, 65638,2, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); 
        LOC(4) = REG1;
        allocCon(REG1, vm, 65647,1, 0);
        SETARG(REG1, 0, LOC(0)); 
        LOC(5) = REG1;
        allocCon(REG1, vm, 65667,4, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(3)); SETARG(REG1, 2, LOC(4)); SETARG(REG1, 3, LOC(5)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris__123_Prelude_46_Strings_46_strM25_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = NULL;
        LOC(3) = NULL;
        LOC(4) = idris_strHead(vm, LOC(0));
        LOC(5) = idris_strTail(vm, LOC(0));
        allocCon(REG1, vm, 1,2, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); 
        LOC(4) = REG1;
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_really_95_believe_95_me);
    }
    else {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = NULL;
        LOC(3) = NULL;
        allocCon(REG1, vm, 0,0, 0);
        
        LOC(4) = REG1;
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_really_95_believe_95_me);
    }
}

void _idris__123_Prelude_46_Strings_46_unpack27_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(3);
    ADDTOP(3);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 2);
        RESERVE(1);
        TOP(0) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Strings_46_unpack);
        LOC(4) = RVAL;
        allocCon(REG1, vm, 1,2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(4)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(1), 2, 0);
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris__123_Prelude_46_Strings_46_ltrim46_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(3);
    ADDTOP(3);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 2);
        RESERVE(1);
        TOP(0) = LOC(2);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Char_46_isSpace);
        LOC(4) = RVAL;
        if (CTAG(LOC(4)) == 0) {
            PROJECT(vm, LOC(4), 5, 0);
            RVAL = idris_strCons(vm, LOC(2),LOC(3));
            TOPBASE(0);
            REBASE;
        }
        else {
            PROJECT(vm, LOC(4), 5, 0);
            RESERVE(1);
            TOP(0) = LOC(3);
            SLIDE(vm, 1);
            TOPBASE(1);
            TAILCALL(_idris_Prelude_46_Strings_46_ltrim);
        }
    }
    else {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = MKSTR(vm, "");
        TOPBASE(0);
        REBASE;
    }
}

void _idris__123_Prelude_46_Classes_46_Nat_32_instance_32_of_32_Prelude_46_Classes_46_Ord_44__32_method_32__62_67_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 2) {
        PROJECT(vm, LOC(0), 3, 0);
        allocCon(REG1, vm, 1,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_System_46_getArgs_58_ga_39__58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(5);
    ADDTOP(5);
    LOC(3) = INTOP(==,LOC(1), LOC(2));
    RESERVE(1);
    TOP(0) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Prelude_46_Classes_46_intToBool);
    LOC(3) = RVAL;
    if (CTAG(LOC(3)) == 0) {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(4) = NULL;
        LOC(5) = NULL;
        allocCon(REG1, vm, 65664,1, 0);
        SETARG(REG1, 0, LOC(1)); 
        LOC(6) = REG1;
        allocCon(REG1, vm, 65670,3, 0);
        SETARG(REG1, 0, LOC(0)); SETARG(REG1, 1, LOC(1)); SETARG(REG1, 2, LOC(2)); 
        LOC(7) = REG1;
        allocCon(REG1, vm, 65667,4, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); SETARG(REG1, 2, LOC(6)); SETARG(REG1, 3, LOC(7)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(4) = NULL;
        LOC(5) = NULL;
        allocCon(REG1, vm, 0,0, 0);
        
        LOC(6) = REG1;
        RESERVE(3);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        TOP(2) = LOC(0);
        STOREOLD;
        BASETOP(0);
        ADDTOP(3);
        CALL(_idris_Prelude_46_List_46_reverse_58_reverse_39__58_0);
        LOC(5) = RVAL;
        allocCon(REG1, vm, 65668,2, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_System_46_getArgs_58_getArg_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKSTR(vm, idris_getArg(GETINT(LOC(0))));
    TOPBASE(0);
    REBASE;
}

void _idris_System_46_getArgs_58_numArgs_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(idris_numArgs()));
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_List_46_reverse_58_reverse_39__58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        LOC(5) = NULL;
        allocCon(REG1, vm, 1,2, 0);
        SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(1)); 
        LOC(6) = REG1;
        RESERVE(3);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        TOP(2) = LOC(4);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_Prelude_46_List_46_reverse_58_reverse_39__58_0);
    }
    else {
        PROJECT(vm, LOC(2), 3, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Char_58__33_decEq_58_0_58_primitiveEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Char_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Float_58__33_decEq_58_0_58_primitiveEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Float_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Int_58__33_decEq_58_0_58_primitiveEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Int_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Integer_58__33_decEq_58_0_58_primitiveEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Integer_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_String_58__33_decEq_58_0_58_primitiveEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_String_58__33_decEq_58_0_58_primitiveNotEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void _idris_Prelude_46_Functor_46__64_Prelude_46_Functor_46_Functor_36_List_58__33_map_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(7);
    ADDTOP(7);
    if (CTAG(LOC(3)) == 1) {
        PROJECT(vm, LOC(3), 4, 2);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(4);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(6) = RVAL;
        LOC(7) = NULL;
        LOC(8) = NULL;
        LOC(9) = NULL;
        allocCon(REG1, vm, 65676,0, 0);
        
        LOC(10) = REG1;
        RESERVE(4);
        TOP(0) = LOC(7);
        TOP(1) = LOC(8);
        TOP(2) = LOC(9);
        TOP(3) = LOC(10);
        STOREOLD;
        BASETOP(0);
        ADDTOP(4);
        CALL(_idris_Prelude_46_Functor_46_map);
        LOC(7) = RVAL;
        RESERVE(2);
        TOP(0) = LOC(7);
        TOP(1) = LOC(2);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(7) = RVAL;
        RESERVE(2);
        TOP(0) = LOC(7);
        TOP(1) = LOC(5);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(7) = RVAL;
        allocCon(REG1, vm, 1,2, 0);
        SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else {
        PROJECT(vm, LOC(3), 4, 0);
        allocCon(REG1, vm, 0,0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_Classes_46__64_Prelude_46_Classes_46_Ord_36_Nat_58__33_compare_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (bigEqConst(LOC(1), 0)) {
        if (bigEqConst(LOC(0), 0)) {
            allocCon(REG1, vm, 1,0, 0);
            
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        } else
        {
            LOC(2) = MKINT(1);
            LOC(2) = idris_bigMinus(vm, LOC(0), LOC(2));
            allocCon(REG1, vm, 2,0, 0);
            
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
    } else
    {
        LOC(2) = MKINT(1);
        LOC(2) = idris_bigMinus(vm, LOC(1), LOC(2));
        if (bigEqConst(LOC(0), 0)) {
            allocCon(REG1, vm, 0,0, 0);
            
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        } else
        {
            LOC(3) = MKINT(1);
            LOC(3) = idris_bigMinus(vm, LOC(0), LOC(3));
            LOC(4) = NULL;
            allocCon(REG1, vm, 65673,0, 0);
            
            LOC(5) = REG1;
            RESERVE(2);
            TOP(0) = LOC(4);
            TOP(1) = LOC(5);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris_Prelude_46_Classes_46_compare);
            LOC(4) = RVAL;
            RESERVE(2);
            TOP(0) = LOC(4);
            TOP(1) = LOC(3);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris__123_APPLY0_125_);
            LOC(4) = RVAL;
            RESERVE(2);
            TOP(0) = LOC(4);
            TOP(1) = LOC(2);
            SLIDE(vm, 2);
            TOPBASE(2);
            TAILCALL(_idris__123_APPLY0_125_);
        }
    }
}

void _idris__64_Prelude_46_Functor_46_Functor_36_List(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    LOC(4) = NULL;
    LOC(5) = NULL;
    RESERVE(4);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(2);
    TOP(3) = LOC(3);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_Functor_46__64_Prelude_46_Functor_46_Functor_36_List_58__33_map_58_0);
}

void _idris__64_Prelude_46_Classes_46_Ord_36_Nat(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(0);
    TOP(1) = LOC(1);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris_Prelude_46_Classes_46__64_Prelude_46_Classes_46_Ord_36_Nat_58__33_compare_58_0);
}

void _idris_io_95_bind_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(4);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY0_125_);
}

void _idris_Main_46_main_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(6)) == 1) {
        PROJECT(vm, LOC(6), 7, 1);
        LOC(8) = NULL;
        LOC(9) = NULL;
        LOC(10) = NULL;
        RESERVE(4);
        TOP(0) = LOC(8);
        TOP(1) = LOC(9);
        TOP(2) = LOC(10);
        TOP(3) = LOC(2);
        STOREOLD;
        BASETOP(0);
        ADDTOP(4);
        CALL(_idris_Prelude_46_Monad_46__62__62__61_);
        LOC(8) = RVAL;
        LOC(9) = MKSTR(vm, "my ipkg is: ");
        LOC(9) = idris_concat(vm, LOC(9), LOC(7));
        LOC(10) = MKSTR(vm, """\x0a""");
        LOC(9) = idris_concat(vm, LOC(9), LOC(10));
        allocCon(REG1, vm, 65663,1, 0);
        SETARG(REG1, 0, LOC(9)); 
        LOC(9) = REG1;
        RESERVE(2);
        TOP(0) = LOC(8);
        TOP(1) = LOC(9);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY0_125_);
        LOC(8) = RVAL;
        allocCon(REG1, vm, 65641,2, 0);
        SETARG(REG1, 0, LOC(7)); SETARG(REG1, 1, LOC(1)); 
        LOC(9) = REG1;
        RESERVE(2);
        TOP(0) = LOC(8);
        TOP(1) = LOC(9);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_APPLY0_125_);
    }
    else {
        fprintf(stderr, "Error"); assert(0); exit(-1);    }
}

void _idris_Prelude_46_List_46_span_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(3);
    ADDTOP(3);
{
        PROJECT(vm, LOC(4), 5, 2);
        allocCon(REG1, vm, 1,2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(5)); 
        LOC(7) = REG1;
        allocCon(REG1, vm, 0,2, 0);
        SETARG(REG1, 0, LOC(7)); SETARG(REG1, 1, LOC(6)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void _idris_Prelude_46_List_46_split_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(5);
    ADDTOP(5);
{
        PROJECT(vm, LOC(3), 4, 2);
        if (CTAG(LOC(5)) == 1) {
            PROJECT(vm, LOC(5), 6, 2);
            LOC(8) = NULL;
            RESERVE(3);
            TOP(0) = LOC(8);
            TOP(1) = LOC(1);
            TOP(2) = LOC(7);
            STOREOLD;
            BASETOP(0);
            ADDTOP(3);
            CALL(_idris_Prelude_46_List_46_split);
            LOC(8) = RVAL;
            allocCon(REG1, vm, 1,2, 0);
            SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(8)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
        else {
            PROJECT(vm, LOC(5), 6, 0);
            allocCon(REG1, vm, 0,0, 0);
            
            LOC(6) = REG1;
            allocCon(REG1, vm, 1,2, 0);
            SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(6)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
    }
}

void _idris_Main_46_main_95_case_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
    RESERVE(2);
    ADDTOP(2);
    if (CTAG(LOC(9)) == 1) {
        PROJECT(vm, LOC(9), 10, 1);
        if (strcmp(GETSTR(LOC(10)), "build") == 0) {
            LOC(11) = MKSTR(vm, "idris --build ");
            LOC(11) = idris_concat(vm, LOC(11), LOC(6));
            allocCon(REG1, vm, 65639,1, 0);
            SETARG(REG1, 0, LOC(11)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        } else
        if (strcmp(GETSTR(LOC(10)), "install") == 0) {
            LOC(11) = MKSTR(vm, "idris --install ");
            LOC(11) = idris_concat(vm, LOC(11), LOC(6));
            allocCon(REG1, vm, 65639,1, 0);
            SETARG(REG1, 0, LOC(11)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        } else
        {
            LOC(11) = MKSTR(vm, "What?""\x0a""");
            allocCon(REG1, vm, 65663,1, 0);
            SETARG(REG1, 0, LOC(11)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
    }
    else {
        LOC(10) = MKSTR(vm, "What?""\x0a""");
        allocCon(REG1, vm, 65663,1, 0);
        SETARG(REG1, 0, LOC(10)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

