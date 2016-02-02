/*
 * Code for class WEL_PROCESS_TOOLHELP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F923_7703(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7704(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7705(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7706(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7707(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7708(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7709(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7710(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7711(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7712(EIF_REFERENCE);
extern EIF_TYPED_VALUE F923_7713(EIF_REFERENCE);
extern void EIF_Minit923(void);

#ifdef __cplusplus
}
#endif

#include <Tlhelp32.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F923_7703
static EIF_INTEGER_32 inline_F923_7703 (void)
{
	return (EIF_INTEGER_32) (PROCESS_ALL_ACCESS)
	;
}
#define INLINE_F923_7703
#endif
#ifndef INLINE_F923_7704
static EIF_INTEGER_32 inline_F923_7704 (void)
{
	return (EIF_INTEGER_32) (PROCESS_TERMINATE)
	;
}
#define INLINE_F923_7704
#endif
#ifndef INLINE_F923_7705
static EIF_INTEGER_32 inline_F923_7705 (void)
{
	return (EIF_INTEGER_32) (PROCESS_CREATE_PROCESS)
	;
}
#define INLINE_F923_7705
#endif
#ifndef INLINE_F923_7706
static EIF_INTEGER_32 inline_F923_7706 (void)
{
	return (EIF_INTEGER_32) (PROCESS_DUP_HANDLE)
	;
}
#define INLINE_F923_7706
#endif
#ifndef INLINE_F923_7707
static EIF_INTEGER_32 inline_F923_7707 (void)
{
	return (EIF_INTEGER_32) (PROCESS_QUERY_INFORMATION)
	;
}
#define INLINE_F923_7707
#endif
#ifndef INLINE_F923_7708
static EIF_INTEGER_32 inline_F923_7708 (void)
{
	return (EIF_INTEGER_32) (PROCESS_SET_QUOTA)
	;
}
#define INLINE_F923_7708
#endif
#ifndef INLINE_F923_7709
static EIF_INTEGER_32 inline_F923_7709 (void)
{
	return (EIF_INTEGER_32) (PROCESS_SET_INFORMATION)
	;
}
#define INLINE_F923_7709
#endif
#ifndef INLINE_F923_7710
static EIF_INTEGER_32 inline_F923_7710 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_OPERATION)
	;
}
#define INLINE_F923_7710
#endif
#ifndef INLINE_F923_7711
static EIF_INTEGER_32 inline_F923_7711 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_READ)
	;
}
#define INLINE_F923_7711
#endif
#ifndef INLINE_F923_7712
static EIF_INTEGER_32 inline_F923_7712 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_WRITE)
	;
}
#define INLINE_F923_7712
#endif
#ifndef INLINE_F923_7713
static EIF_INTEGER_32 inline_F923_7713 (void)
{
	return (EIF_INTEGER_32) (SYNCHRONIZE)
	;
}
#define INLINE_F923_7713
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_all_access */
EIF_TYPED_VALUE F923_7703 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_all_access";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13193);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13193);
	RTIV(Current, RTAL);
	Result = inline_F923_7703 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_terminate */
EIF_TYPED_VALUE F923_7704 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_terminate";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13194);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13194);
	RTIV(Current, RTAL);
	Result = inline_F923_7704 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_create_process */
EIF_TYPED_VALUE F923_7705 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_create_process";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13195);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13195);
	RTIV(Current, RTAL);
	Result = inline_F923_7705 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_dup_handle */
EIF_TYPED_VALUE F923_7706 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_dup_handle";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13196);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13196);
	RTIV(Current, RTAL);
	Result = inline_F923_7706 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_query_information */
EIF_TYPED_VALUE F923_7707 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_query_information";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13197);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13197);
	RTIV(Current, RTAL);
	Result = inline_F923_7707 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_set_quota */
EIF_TYPED_VALUE F923_7708 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_set_quota";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13198);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13198);
	RTIV(Current, RTAL);
	Result = inline_F923_7708 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_set_information */
EIF_TYPED_VALUE F923_7709 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_set_information";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13199);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13199);
	RTIV(Current, RTAL);
	Result = inline_F923_7709 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_vm_operation */
EIF_TYPED_VALUE F923_7710 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_vm_operation";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13200);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13200);
	RTIV(Current, RTAL);
	Result = inline_F923_7710 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_vm_read */
EIF_TYPED_VALUE F923_7711 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_vm_read";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13201);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13201);
	RTIV(Current, RTAL);
	Result = inline_F923_7711 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_vm_write */
EIF_TYPED_VALUE F923_7712 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_vm_write";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13202);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13202);
	RTIV(Current, RTAL);
	Result = inline_F923_7712 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_synchronize */
EIF_TYPED_VALUE F923_7713 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_synchronize";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 922, Current, 0, 0, 13203);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(922, Current, 13203);
	RTIV(Current, RTAL);
	Result = inline_F923_7713 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit923 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
