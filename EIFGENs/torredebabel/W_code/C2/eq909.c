/*
 * Code for class EQA_SYSTEM_EXECUTION_PROCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F909_7546(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F909_7547(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7548(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7549(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7550(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7551(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7552(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7553(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7554(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7555(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7556(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7557(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7558(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7559(EIF_REFERENCE);
extern EIF_TYPED_VALUE F909_7560(EIF_REFERENCE);
extern void F909_7561(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F909_7562(EIF_REFERENCE);
extern void F909_7563(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F909_7564(EIF_REFERENCE);
extern void F909_7565(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F909_7566(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F909_7567(EIF_REFERENCE);
extern void EIF_Minit909(void);
extern EIF_REFERENCE _A909_51_2();
extern EIF_REFERENCE _A909_48();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_SYSTEM_EXECUTION_PROCESS}.make */
void F909_7546 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
#define arg5 arg5x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,arg5);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 908, Current, 0, 5, 13040);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13040);
	RTCC(arg1, 908, l_feature_name, 1, RTWCT(5342, dtype, Dftype(Current)), 0x00);
	RTCC(arg2, 908, l_feature_name, 2, RTWCT(5342, dtype, Dftype(Current)), 0x00);
	RTCC(arg3, 908, l_feature_name, 3, RTWCT(5344, dtype, Dftype(Current)), 0x00);
	RTCC(arg4, 908, l_feature_name, 4, RTWCT(5344, dtype, Dftype(Current)), 0x00);
	RTCC(arg5, 908, l_feature_name, 5, RTWCT(5344, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("output_file_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2844, "is_open_write", arg3))(arg3)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("error_file_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg4 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2844, "is_open_write", arg4))(arg4)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("input_file_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg5 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2843, "is_open_read", arg5))(arg5)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5338, 0xF80003D5, 0); /* mutex */
	tr1 = RTLNSMART(RTWCT(5338, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6289, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5338, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5339, 0xF80003D6, 0); /* consumer_signal */
	tr1 = RTLNSMART(RTWCT(5339, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6304, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5339, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5340, 0xF80003D6, 0); /* producer_signal */
	tr1 = RTLNSMART(RTWCT(5340, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6304, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5340, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5342, 0xF800038D, 0); /* output_processor */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5342, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5343, 0xF800038D, 0); /* error_processor */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(5343, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5344, 0xF80000A4, 0); /* output_file */
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(5344, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5345, 0xF80000A4, 0); /* error_file */
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + RTWA(5345, dtype)) = (EIF_REFERENCE) RTCCL(arg4);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5346, 0xF80000A4, 0); /* input_file */
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + RTWA(5346, dtype)) = (EIF_REFERENCE) RTCCL(arg5);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("output_processor_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("error_processor_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5343, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("output_file_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5344, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("error_file_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5345, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("input_file_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg5)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.last_exit_code */
EIF_TYPED_VALUE F909_7547 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5336,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.process */
EIF_TYPED_VALUE F909_7548 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5337,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.mutex */
EIF_TYPED_VALUE F909_7549 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5338,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.consumer_signal */
EIF_TYPED_VALUE F909_7550 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5339,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.producer_signal */
EIF_TYPED_VALUE F909_7551 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5340,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.next_output */
EIF_TYPED_VALUE F909_7552 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5341,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.output_processor */
EIF_TYPED_VALUE F909_7553 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5342,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.error_processor */
EIF_TYPED_VALUE F909_7554 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5343,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.output_file */
EIF_TYPED_VALUE F909_7555 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5344,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.error_file */
EIF_TYPED_VALUE F909_7556 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5345,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.input_file */
EIF_TYPED_VALUE F909_7557 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5346,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.is_running */
EIF_TYPED_VALUE F909_7558 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_running";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 908, Current, 0, 0, 13052);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(908, Current, 13052);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5337, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.is_next_error */
EIF_TYPED_VALUE F909_7559 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5348,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.is_finished */
EIF_TYPED_VALUE F909_7560 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5349,Dtype(Current)));
	return r;
}


/* {EQA_SYSTEM_EXECUTION_PROCESS}.launch */
void F909_7561 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "launch";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,loc2);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLR(10,tr2);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 908, Current, 2, 3, 13055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13055);
	RTCC(arg1, 908, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,263,0xFF01,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 908, l_feature_name, 2, typres0, 0x01);
	}
	RTCC(arg3, 908, l_feature_name, 3, eif_new_type(217, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exec_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_arg_list_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_dir_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_running", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5347, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800038B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(907, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF800039D, 0, 0); /* loc2 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5332, "process_launcher", loc1))(loc1, ur1x, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5555, "enable_launch_in_new_process_group", loc2))(loc2);
	RTHOOK(8);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5544, "set_separate_console", loc2))(loc2, ub1x);
	RTHOOK(9);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5543, "set_hidden", loc2))(loc2, ub1x);
	if (RTAL & CK_CHECK) {
		RTHOOK(10);
		RTCT(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(11);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5355, dtype))(Current, ur1x);
	RTHOOK(12);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,174,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,238,0xFF01,0,0xFF01,0xFFF9,0,174,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A909_48, (EIF_POINTER)(0),5351, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5552, "set_on_terminate_handler", loc2))(loc2, ur1x);
	RTHOOK(13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,174,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,238,0xFF01,0,0xFF01,0xFFF9,0,174,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A909_48, (EIF_POINTER)(0),5351, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5551, "set_on_exit_handler", loc2))(loc2, ur1x);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5535, "launch", loc2))(loc2);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 5337, 0xF800039D, 0); /* process */
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + RTWA(5337, dtype)) = (EIF_REFERENCE) RTCCL(loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.set_finished */
void F909_7562 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_finished";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 908, Current, 0, 0, 13056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13056);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6292, "lock", tr1))(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5349, 0x04000000, 1); /* is_finished */
	*(EIF_BOOLEAN *)(Current + RTWA(5349, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5339, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6307, "broadcast", tr1))(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6294, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.redirect_input */
void F909_7563 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "redirect_input";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 908, Current, 1, 1, 13057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13057);
	RTCC(arg1, 908, l_feature_name, 1, eif_new_type(218, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_input_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("running", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5347, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6292, "lock", tr1))(tr1);
	RTHOOK(4);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5349, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		RTCT0("is_runnign", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5337, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5540, "put_string", loc1))(loc1, ur1x);
	}
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6294, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.redirect_output */
void F909_7564 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "redirect_output";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 908, Current, 4, 0, 13036);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13036);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("running", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5347, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6292, "lock", tr1))(tr1);
	RTHOOK(3);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5349, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5339, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6308, "wait", tr1))(tr1, ur1x);
	}
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF80000DA, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5348, dtype));
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(Current, 2, 0xF800038D, 0, 0); /* loc2 */
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5343, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(9);
			RTDBGAL(Current, 3, 0xF80000A4, 0, 0); /* loc3 */
			loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5345, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(10);
			RTDBGAL(Current, 2, 0xF800038D, 0, 0); /* loc2 */
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(11);
			RTDBGAL(Current, 3, 0xF80000A4, 0, 0); /* loc3 */
			loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5344, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		}
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(13);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5362, "append_output", loc2))(loc2, ur1x);
		}
		RTHOOK(14);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1707, "extendible", loc3))(loc3)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4399, "as_string_8", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", loc3))(loc3, ur1x);
		}
	}
	RTHOOK(16);
	RTDBGAA(Current, dtype, 5341, 0xF80000DA, 0); /* next_output */
	*(EIF_REFERENCE *)(Current + RTWA(5341, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(17);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5349, dtype));
	if (tb1) {
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5356, dtype))(Current);
		RTHOOK(19);
		RTCT0(NULL, EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5337, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(20);
		RTDBGAA(Current, dtype, 5336, 0x10000000, 1); /* last_exit_code */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5563, "exit_code", loc4))(loc4)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(5336, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(21);
		RTDBGAA(Current, dtype, 5337, 0xF800039D, 0); /* process */
		*(EIF_REFERENCE *)(Current + RTWA(5337, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(22);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5340, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(22,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6306, "signal", tr1))(tr1);
	RTHOOK(23);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(23,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6294, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.append_output */
void F909_7565 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_output";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 908, Current, 0, 2, 13037);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13037);
	RTCC(arg1, 908, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_output_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6292, "lock", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5340, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6308, "wait", tr1))(tr1, ur1x);
	}
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5349, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5341, 0xF80000DA, 0); /* next_output */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5341, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5348, 0x04000000, 1); /* is_next_error */
		*(EIF_BOOLEAN *)(Current + RTWA(5348, dtype)) = (EIF_BOOLEAN) arg2;
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5339, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6306, "signal", tr1))(tr1);
	}
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6294, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.prepare_redirection */
void F909_7566 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prepare_redirection";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur1);
	RTLR(9,loc2);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 908, Current, 5, 1, 13038);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13038);
	RTCC(arg1, 908, l_feature_name, 1, RTWCT(5337, dtype, dftype), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_process_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800038D, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF80000A4, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5344, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,191,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_b = (EIF_BOOLEAN) 0;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		{
			static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
			memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr3)))(tr3).it_r;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,238,0xFF01,0,0xFF01,0xFFF9,1,174,0xFF01,220,0xFFFF};
			EIF_TYPE typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A909_51_2, (EIF_POINTER)(0),5354, tr2, 0, 1, -1, tr1, 1);
		}
		ur1 = RTCCL(tr4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5527, "redirect_output_to_agent", arg1))(arg1, ur1x);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2850, "is_closed", loc3))(loc3)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2852, "close", loc3))(loc3);
			}
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3104, "path", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3524, "name", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5526, "redirect_output_to_file", arg1))(arg1, ur1x);
		}
	}
	RTHOOK(10);
	RTDBGAL(Current, 2, 0xF800038D, 0, 0); /* loc2 */
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5343, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(11);
	RTDBGAL(Current, 4, 0xF80000A4, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5345, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(13);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,191,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_b = (EIF_BOOLEAN) 1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		{
			static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr3) = 1L;
			memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
		}
		*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr3)))(tr3).it_r;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,238,0xFF01,0,0xFF01,0xFFF9,1,174,0xFF01,220,0xFFFF};
			EIF_TYPE typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A909_51_2, (EIF_POINTER)(0),5354, tr2, 0, 1, -1, tr1, 1);
		}
		ur1 = RTCCL(tr4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5530, "redirect_error_to_agent", arg1))(arg1, ur1x);
	} else {
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTHOOK(15);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2850, "is_closed", loc4))(loc4)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2852, "close", loc4))(loc4);
			}
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3104, "path", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3524, "name", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5529, "redirect_error_to_file", arg1))(arg1, ur1x);
		} else {
			RTHOOK(18);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5531, "redirect_error_to_same_as_output", arg1))(arg1);
		}
	}
	RTHOOK(19);
	RTDBGAL(Current, 5, 0xF80000A4, 0, 0); /* loc5 */
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(20);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTHOOK(21);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2850, "is_closed", loc5))(loc5)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2852, "close", loc5))(loc5);
		}
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3104, "path", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3524, "name", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5524, "redirect_input_to_file", arg1))(arg1, ur1x);
	} else {
		RTHOOK(24);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5523, "redirect_input_to_stream", arg1))(arg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EQA_SYSTEM_EXECUTION_PROCESS}.cleanup_redirection */
void F909_7567 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cleanup_redirection";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 908, Current, 4, 0, 13039);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(908, Current, 13039);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("running", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5347, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("finished", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5349, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800038D, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5363, "flush_buffer", loc1))(loc1);
	}
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF800038D, 0, 0); /* loc2 */
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5343, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5363, "flush_buffer", loc2))(loc2);
	}
	RTHOOK(9);
	RTDBGAL(Current, 3, 0xF80000A4, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5344, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2850, "is_closed", loc3))(loc3)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3163, "flush", loc3))(loc3);
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2852, "close", loc3))(loc3);
	}
	RTHOOK(13);
	RTDBGAL(Current, 4, 0xF80000A4, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5345, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(14);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2850, "is_closed", loc4))(loc4)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3163, "flush", loc4))(loc4);
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2852, "close", loc4))(loc4);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
}

void EIF_Minit909 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
