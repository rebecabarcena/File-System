/*
 * Code for class SOCKET_RESOURCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F964_8230(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8231(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8232(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8233(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8234(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8235(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8236(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8237(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8238(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8239(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8240(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8241(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8242(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8243(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8244(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8245(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8246(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_8253(EIF_REFERENCE);extern EIF_INTEGER_32 c_oobmsg();

extern EIF_TYPED_VALUE F964_8254(EIF_REFERENCE);extern EIF_INTEGER_32 c_peekmsg();

extern EIF_TYPED_VALUE F964_8255(EIF_REFERENCE);extern EIF_INTEGER_32 c_msgdontroute();

extern EIF_TYPED_VALUE F964_8256(EIF_REFERENCE);extern EIF_INTEGER_32 level_sol_socket();

extern EIF_TYPED_VALUE F964_8257(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_raw();

extern EIF_TYPED_VALUE F964_8258(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_pe();

extern EIF_TYPED_VALUE F964_8259(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_spp();

extern EIF_TYPED_VALUE F964_8260(EIF_REFERENCE);extern EIF_INTEGER_32 level_iproto_tcp();

extern EIF_TYPED_VALUE F964_8261(EIF_REFERENCE);extern EIF_INTEGER_32 level_iproto_ip();

extern EIF_TYPED_VALUE F964_8262(EIF_REFERENCE);extern EIF_INTEGER_32 ipoptions();

extern EIF_TYPED_VALUE F964_8263(EIF_REFERENCE);extern EIF_INTEGER_32 tcpmax_seg();

extern EIF_TYPED_VALUE F964_8264(EIF_REFERENCE);extern EIF_INTEGER_32 tcpno_delay();

extern EIF_TYPED_VALUE F964_8265(EIF_REFERENCE);extern EIF_INTEGER_32 so_headerson_input();

extern EIF_TYPED_VALUE F964_8266(EIF_REFERENCE);extern EIF_INTEGER_32 so_headerson_output();

extern EIF_TYPED_VALUE F964_8267(EIF_REFERENCE);extern EIF_INTEGER_32 so_defaultheaders();

extern EIF_TYPED_VALUE F964_8268(EIF_REFERENCE);extern EIF_INTEGER_32 so_lastheader();

extern EIF_TYPED_VALUE F964_8269(EIF_REFERENCE);extern EIF_INTEGER_32 somtu();

extern EIF_TYPED_VALUE F964_8270(EIF_REFERENCE);extern EIF_INTEGER_32 soseqno();

extern EIF_TYPED_VALUE F964_8271(EIF_REFERENCE);extern EIF_INTEGER_32 so_allpackets();

extern EIF_TYPED_VALUE F964_8272(EIF_REFERENCE);extern EIF_INTEGER_32 so_nsiproute();

extern EIF_TYPED_VALUE F964_8273(EIF_REFERENCE);extern EIF_INTEGER_32 sobroadcast();

extern EIF_TYPED_VALUE F964_8274(EIF_REFERENCE);extern EIF_INTEGER_32 sodebug();

extern EIF_TYPED_VALUE F964_8275(EIF_REFERENCE);extern EIF_INTEGER_32 so_dont_route();

extern EIF_TYPED_VALUE F964_8276(EIF_REFERENCE);extern EIF_INTEGER_32 soerror();

extern EIF_TYPED_VALUE F964_8277(EIF_REFERENCE);extern EIF_INTEGER_32 so_keep_alive();

extern EIF_TYPED_VALUE F964_8278(EIF_REFERENCE);extern EIF_INTEGER_32 solinger();

extern EIF_TYPED_VALUE F964_8279(EIF_REFERENCE);extern EIF_INTEGER_32 so_oob_inline();

extern EIF_TYPED_VALUE F964_8280(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_buf();

extern EIF_TYPED_VALUE F964_8281(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_buf();

extern EIF_TYPED_VALUE F964_8282(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_lowat();

extern EIF_TYPED_VALUE F964_8283(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_lowat();

extern EIF_TYPED_VALUE F964_8284(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_timeo();

extern EIF_TYPED_VALUE F964_8285(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_timeo();

extern EIF_TYPED_VALUE F964_8286(EIF_REFERENCE);extern EIF_INTEGER_32 so_reuse_addr();

extern EIF_TYPED_VALUE F964_8287(EIF_REFERENCE);extern EIF_INTEGER_32 sotype();

extern EIF_TYPED_VALUE F964_8288(EIF_REFERENCE);extern EIF_INTEGER_32 so_use_loopback();

extern EIF_TYPED_VALUE F964_8289(EIF_REFERENCE);extern EIF_INTEGER_32 c_errorno();

extern void F964_8290(EIF_REFERENCE);extern void c_reset_error();

extern EIF_TYPED_VALUE F964_8291(EIF_REFERENCE);extern EIF_INTEGER_32 family_no_support();

extern EIF_TYPED_VALUE F964_8292(EIF_REFERENCE);extern EIF_INTEGER_32 proto_no_support();

extern EIF_TYPED_VALUE F964_8293(EIF_REFERENCE);extern EIF_INTEGER_32 table_full();

extern EIF_TYPED_VALUE F964_8294(EIF_REFERENCE);extern EIF_INTEGER_32 no_buffs();

extern EIF_TYPED_VALUE F964_8295(EIF_REFERENCE);extern EIF_INTEGER_32 c_permission();

extern EIF_TYPED_VALUE F964_8296(EIF_REFERENCE);extern EIF_INTEGER_32 bad_socket();

extern EIF_TYPED_VALUE F964_8297(EIF_REFERENCE);extern EIF_INTEGER_32 no_socket();

extern EIF_TYPED_VALUE F964_8298(EIF_REFERENCE);extern EIF_INTEGER_32 error_address();

extern EIF_TYPED_VALUE F964_8299(EIF_REFERENCE);extern EIF_INTEGER_32 busy_address();

extern EIF_TYPED_VALUE F964_8300(EIF_REFERENCE);extern EIF_INTEGER_32 bound_address();

extern EIF_TYPED_VALUE F964_8301(EIF_REFERENCE);extern EIF_INTEGER_32 no_access();

extern EIF_TYPED_VALUE F964_8302(EIF_REFERENCE);extern EIF_INTEGER_32 unreadable();

extern EIF_TYPED_VALUE F964_8303(EIF_REFERENCE);extern EIF_INTEGER_32 no_connect();

extern EIF_TYPED_VALUE F964_8304(EIF_REFERENCE);extern EIF_INTEGER_32 would_block();

extern EIF_TYPED_VALUE F964_8305(EIF_REFERENCE);extern EIF_INTEGER_32 in_use();

extern EIF_TYPED_VALUE F964_8306(EIF_REFERENCE);extern EIF_INTEGER_32 socket_expire();

extern EIF_TYPED_VALUE F964_8307(EIF_REFERENCE);extern EIF_INTEGER_32 connect_refused();

extern EIF_TYPED_VALUE F964_8308(EIF_REFERENCE);extern EIF_INTEGER_32 no_network();

extern EIF_TYPED_VALUE F964_8309(EIF_REFERENCE);extern EIF_INTEGER_32 no_option();

extern EIF_TYPED_VALUE F964_8310(EIF_REFERENCE);extern EIF_INTEGER_32 c_einprogress();

extern EIF_TYPED_VALUE F964_8311(EIF_REFERENCE);extern EIF_INTEGER_32 sock_raw();

extern EIF_TYPED_VALUE F964_8312(EIF_REFERENCE);extern EIF_INTEGER_32 sock_dgrm();

extern EIF_TYPED_VALUE F964_8313(EIF_REFERENCE);extern EIF_INTEGER_32 sock_stream();

extern EIF_TYPED_VALUE F964_8314(EIF_REFERENCE);extern EIF_INTEGER_32 af_ns();

extern EIF_TYPED_VALUE F964_8315(EIF_REFERENCE);extern EIF_INTEGER_32 af_inet();

extern EIF_TYPED_VALUE F964_8316(EIF_REFERENCE);extern EIF_INTEGER_32 af_inet6();

extern EIF_TYPED_VALUE F964_8317(EIF_REFERENCE);extern EIF_INTEGER_32 af_unix();

extern EIF_TYPED_VALUE F964_8318(EIF_REFERENCE);extern EIF_INTEGER_32 c_fgetown();

extern EIF_TYPED_VALUE F964_8319(EIF_REFERENCE);extern EIF_INTEGER_32 c_fsetown();

extern EIF_TYPED_VALUE F964_8320(EIF_REFERENCE);extern EIF_INTEGER_32 c_fsetfl();

extern EIF_TYPED_VALUE F964_8321(EIF_REFERENCE);extern EIF_INTEGER_32 c_fgetfl();

extern EIF_TYPED_VALUE F964_8322(EIF_REFERENCE);extern EIF_INTEGER_32 c_fndelay();

extern EIF_TYPED_VALUE F964_8323(EIF_REFERENCE);extern EIF_INTEGER_32 c_fasync();

extern void EIF_Minit964(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET_RESOURCES}.error */
EIF_TYPED_VALUE F964_8230 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5955, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
		Result = RTMS_EX_H("Address not readable",20,873162085);
	} else {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5953, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
			Result = RTMS_EX_H("Socket Ok",9,1074390891);
		} else {
			RTHOOK(5);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5956, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
				Result = RTMS_EX_H("Address protected",17,1503340644);
			} else {
				RTHOOK(7);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5957, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
					Result = RTMS_EX_H("Address already bound",21,1660292964);
				} else {
					RTHOOK(9);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5958, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
						Result = RTMS_EX_H("Address in use",14,15438693);
					} else {
						RTHOOK(11);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5959, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
							Result = RTMS_EX_H("Address not available",21,1332773733);
						} else {
							RTHOOK(13);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5960, dtype))(Current)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
								Result = RTMS_EX_H("Address is a file",17,2142535781);
							} else {
								RTHOOK(15);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5961, dtype))(Current)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
									Result = RTMS_EX_H("Socket invalid",14,1837204324);
								} else {
									RTHOOK(17);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, dtype))(Current)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
										Result = RTMS_EX_H("family not supported",20,731000676);
									} else {
										RTHOOK(19);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5962, dtype))(Current)).it_b);
										if (tb1) {
											RTHOOK(20);
											RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
											Result = RTMS_EX_H("No permission",13,1184493678);
										} else {
											RTHOOK(21);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5963, dtype))(Current)).it_b);
											if (tb1) {
												RTHOOK(22);
												RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
												Result = RTMS_EX_H("No buffers",10,787847027);
											} else {
												RTHOOK(23);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5964, dtype))(Current)).it_b);
												if (tb1) {
													RTHOOK(24);
													RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
													Result = RTMS_EX_H("Descriptor table full",21,1884265580);
												} else {
													RTHOOK(25);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5966, dtype))(Current)).it_b);
													if (tb1) {
														RTHOOK(26);
														RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
														Result = RTMS_EX_H("Not connected",13,815868004);
													} else {
														RTHOOK(27);
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5965, dtype))(Current)).it_b);
														if (tb1) {
															RTHOOK(28);
															RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
															Result = RTMS_EX_H("Protocol not supported",22,243713380);
														} else {
															RTHOOK(29);
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5967, dtype))(Current)).it_b);
															if (tb1) {
																RTHOOK(30);
																RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																Result = RTMS_EX_H("Socket would block",18,690973547);
															} else {
																RTHOOK(31);
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5969, dtype))(Current)).it_b);
																if (tb1) {
																	RTHOOK(32);
																	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																	Result = RTMS_EX_H("Socket in use",13,1300329829);
																} else {
																	RTHOOK(33);
																	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5970, dtype))(Current)).it_b);
																	if (tb1) {
																		RTHOOK(34);
																		RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																		Result = RTMS_EX_H("Socket expired",14,2125642852);
																	} else {
																		RTHOOK(35);
																		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5971, dtype))(Current)).it_b);
																		if (tb1) {
																			RTHOOK(36);
																			RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																			Result = RTMS_EX_H("Connection refused",18,349967460);
																		} else {
																			RTHOOK(37);
																			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5972, dtype))(Current)).it_b);
																			if (tb1) {
																				RTHOOK(38);
																				RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																				Result = RTMS_EX_H("No network",10,639723627);
																			} else {
																				RTHOOK(39);
																				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5973, dtype))(Current)).it_b);
																				if (tb1) {
																					RTHOOK(40);
																					RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																					Result = RTMS_EX_H("Not an option",13,380168814);
																				} else {
																					RTHOOK(41);
																					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5968, dtype))(Current)).it_b);
																					if (tb1) {
																						RTHOOK(42);
																						RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																						Result = RTMS_EX_H("Connection in progress",22,1248045171);
																					} else {
																						RTHOOK(43);
																						RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
																						tr1 = RTMS_EX_H("Unknown error : ",16,202816032);
																						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6010, dtype))(Current)).it_i4);
																						tr2 = c_outi(ti4_1);
																						ur1 = RTCCL(tr2);
																						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						Result = (EIF_REFERENCE) RTCCL(tr2);
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {SOCKET_RESOURCES}.error_number */
EIF_TYPED_VALUE F964_8231 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_number";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13670);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(963, Current, 13670);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6010, Dtype(Current)))(Current)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_ok */
EIF_TYPED_VALUE F964_8232 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_ok";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13671);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(963, Current, 13671);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_family_not_supported */
EIF_TYPED_VALUE F964_8233 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_family_not_supported";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13672);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13672);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6012, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.address_not_readable */
EIF_TYPED_VALUE F964_8234 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_not_readable";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13673);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13673);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6023, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.protected_address */
EIF_TYPED_VALUE F964_8235 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "protected_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13674);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13674);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6022, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.already_bound */
EIF_TYPED_VALUE F964_8236 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "already_bound";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13675);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6021, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.address_in_use */
EIF_TYPED_VALUE F964_8237 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_in_use";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13676);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13676);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6020, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.invalid_address */
EIF_TYPED_VALUE F964_8238 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13677);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13677);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6019, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.invalid_socket_handle */
EIF_TYPED_VALUE F964_8239 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_socket_handle";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13678);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13678);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6018, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.bad_socket_handle */
EIF_TYPED_VALUE F964_8240 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bad_socket_handle";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13679);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13679);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6017, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_permission */
EIF_TYPED_VALUE F964_8241 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_permission";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13680);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13680);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6016, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_buffers */
EIF_TYPED_VALUE F964_8242 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_buffers";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13681);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13681);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6015, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.dtable_full */
EIF_TYPED_VALUE F964_8243 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dtable_full";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13682);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13682);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6014, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.protocol_not_supported */
EIF_TYPED_VALUE F964_8244 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "protocol_not_supported";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13683);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13683);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6013, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.not_connected */
EIF_TYPED_VALUE F964_8245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "not_connected";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13684);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6024, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_would_block */
EIF_TYPED_VALUE F964_8246 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_would_block";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13685);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13685);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6025, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.connect_in_progress */
EIF_TYPED_VALUE F964_8247 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect_in_progress";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13686);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13686);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6031, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_in_use */
EIF_TYPED_VALUE F964_8248 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_in_use";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13687);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6026, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.expired_socket */
EIF_TYPED_VALUE F964_8249 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expired_socket";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13688);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6027, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.connection_refused */
EIF_TYPED_VALUE F964_8250 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connection_refused";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13689);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6028, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.network */
EIF_TYPED_VALUE F964_8251 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "network";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13690);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13690);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6029, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.zero_option */
EIF_TYPED_VALUE F964_8252 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero_option";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13691);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13691);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5952, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6030, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_oobmsg */
EIF_TYPED_VALUE F964_8253 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_oobmsg";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13692);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13692);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_oobmsg();
	
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

/* {SOCKET_RESOURCES}.c_peekmsg */
EIF_TYPED_VALUE F964_8254 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_peekmsg";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13693);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13693);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_peekmsg();
	
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

/* {SOCKET_RESOURCES}.c_msgdontroute */
EIF_TYPED_VALUE F964_8255 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_msgdontroute";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13694);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13694);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_msgdontroute();
	
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

/* {SOCKET_RESOURCES}.level_sol_socket */
EIF_TYPED_VALUE F964_8256 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_sol_socket";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13695);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13695);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_sol_socket();
	
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

/* {SOCKET_RESOURCES}.level_nsproto_raw */
EIF_TYPED_VALUE F964_8257 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_raw";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13696);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13696);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_raw();
	
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

/* {SOCKET_RESOURCES}.level_nsproto_pe */
EIF_TYPED_VALUE F964_8258 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_pe";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13697);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13697);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_pe();
	
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

/* {SOCKET_RESOURCES}.level_nsproto_spp */
EIF_TYPED_VALUE F964_8259 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_spp";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13698);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13698);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_spp();
	
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

/* {SOCKET_RESOURCES}.level_iproto_tcp */
EIF_TYPED_VALUE F964_8260 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_iproto_tcp";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13699);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13699);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_iproto_tcp();
	
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

/* {SOCKET_RESOURCES}.level_iproto_ip */
EIF_TYPED_VALUE F964_8261 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_iproto_ip";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13700);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13700);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_iproto_ip();
	
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

/* {SOCKET_RESOURCES}.ipoptions */
EIF_TYPED_VALUE F964_8262 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ipoptions";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13701);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13701);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) ipoptions();
	
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

/* {SOCKET_RESOURCES}.tcpmax_seg */
EIF_TYPED_VALUE F964_8263 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcpmax_seg";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13702);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13702);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) tcpmax_seg();
	
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

/* {SOCKET_RESOURCES}.tcpno_delay */
EIF_TYPED_VALUE F964_8264 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcpno_delay";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13703);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13703);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) tcpno_delay();
	
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

/* {SOCKET_RESOURCES}.so_headerson_input */
EIF_TYPED_VALUE F964_8265 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_headerson_input";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13704);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13704);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_headerson_input();
	
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

/* {SOCKET_RESOURCES}.so_headerson_output */
EIF_TYPED_VALUE F964_8266 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_headerson_output";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13705);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13705);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_headerson_output();
	
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

/* {SOCKET_RESOURCES}.so_defaultheaders */
EIF_TYPED_VALUE F964_8267 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_defaultheaders";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13706);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13706);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_defaultheaders();
	
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

/* {SOCKET_RESOURCES}.so_lastheader */
EIF_TYPED_VALUE F964_8268 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_lastheader";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13707);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13707);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_lastheader();
	
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

/* {SOCKET_RESOURCES}.somtu */
EIF_TYPED_VALUE F964_8269 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "somtu";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13708);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13708);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) somtu();
	
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

/* {SOCKET_RESOURCES}.soseqno */
EIF_TYPED_VALUE F964_8270 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soseqno";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13709);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13709);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) soseqno();
	
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

/* {SOCKET_RESOURCES}.so_allpackets */
EIF_TYPED_VALUE F964_8271 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_allpackets";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13710);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13710);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_allpackets();
	
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

/* {SOCKET_RESOURCES}.so_nsiproute */
EIF_TYPED_VALUE F964_8272 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_nsiproute";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13711);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13711);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_nsiproute();
	
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

/* {SOCKET_RESOURCES}.sobroadcast */
EIF_TYPED_VALUE F964_8273 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sobroadcast";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13712);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13712);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sobroadcast();
	
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

/* {SOCKET_RESOURCES}.sodebug */
EIF_TYPED_VALUE F964_8274 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sodebug";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13713);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13713);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sodebug();
	
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

/* {SOCKET_RESOURCES}.so_dont_route */
EIF_TYPED_VALUE F964_8275 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_dont_route";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13714);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13714);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_dont_route();
	
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

/* {SOCKET_RESOURCES}.soerror */
EIF_TYPED_VALUE F964_8276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soerror";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13715);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13715);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) soerror();
	
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

/* {SOCKET_RESOURCES}.so_keep_alive */
EIF_TYPED_VALUE F964_8277 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_keep_alive";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13716);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13716);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_keep_alive();
	
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

/* {SOCKET_RESOURCES}.solinger */
EIF_TYPED_VALUE F964_8278 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solinger";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13717);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13717);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) solinger();
	
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

/* {SOCKET_RESOURCES}.so_oob_inline */
EIF_TYPED_VALUE F964_8279 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_oob_inline";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13718);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13718);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_oob_inline();
	
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

/* {SOCKET_RESOURCES}.so_rcv_buf */
EIF_TYPED_VALUE F964_8280 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_buf";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13719);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13719);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_buf();
	
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

/* {SOCKET_RESOURCES}.so_snd_buf */
EIF_TYPED_VALUE F964_8281 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_buf";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13720);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13720);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_buf();
	
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

/* {SOCKET_RESOURCES}.so_rcv_lowat */
EIF_TYPED_VALUE F964_8282 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_lowat";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13721);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13721);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_lowat();
	
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

/* {SOCKET_RESOURCES}.so_snd_lowat */
EIF_TYPED_VALUE F964_8283 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_lowat";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13722);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13722);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_lowat();
	
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

/* {SOCKET_RESOURCES}.so_rcv_timeo */
EIF_TYPED_VALUE F964_8284 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_timeo";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13723);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13723);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_timeo();
	
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

/* {SOCKET_RESOURCES}.so_snd_timeo */
EIF_TYPED_VALUE F964_8285 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_timeo";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13724);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13724);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_timeo();
	
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

/* {SOCKET_RESOURCES}.so_reuse_addr */
EIF_TYPED_VALUE F964_8286 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_reuse_addr";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13725);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13725);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_reuse_addr();
	
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

/* {SOCKET_RESOURCES}.sotype */
EIF_TYPED_VALUE F964_8287 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sotype";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13726);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sotype();
	
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

/* {SOCKET_RESOURCES}.so_use_loopback */
EIF_TYPED_VALUE F964_8288 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_use_loopback";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13727);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_use_loopback();
	
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

/* {SOCKET_RESOURCES}.c_errorno */
EIF_TYPED_VALUE F964_8289 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_errorno";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13728);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13728);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_errorno();
	
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

/* {SOCKET_RESOURCES}.c_reset_error */
void F964_8290 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_reset_error";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13729);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13729);
	RTIV(Current, RTAL);c_reset_error();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SOCKET_RESOURCES}.family_no_support */
EIF_TYPED_VALUE F964_8291 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "family_no_support";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13730);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13730);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) family_no_support();
	
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

/* {SOCKET_RESOURCES}.proto_no_support */
EIF_TYPED_VALUE F964_8292 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "proto_no_support";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13731);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13731);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) proto_no_support();
	
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

/* {SOCKET_RESOURCES}.table_full */
EIF_TYPED_VALUE F964_8293 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "table_full";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13732);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13732);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) table_full();
	
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

/* {SOCKET_RESOURCES}.no_buffs */
EIF_TYPED_VALUE F964_8294 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_buffs";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13733);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13733);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_buffs();
	
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

/* {SOCKET_RESOURCES}.c_permission */
EIF_TYPED_VALUE F964_8295 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_permission";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13734);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13734);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_permission();
	
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

/* {SOCKET_RESOURCES}.bad_socket */
EIF_TYPED_VALUE F964_8296 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bad_socket";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13735);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13735);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) bad_socket();
	
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

/* {SOCKET_RESOURCES}.no_socket */
EIF_TYPED_VALUE F964_8297 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_socket";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13736);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13736);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_socket();
	
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

/* {SOCKET_RESOURCES}.error_address */
EIF_TYPED_VALUE F964_8298 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_address";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13737);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13737);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) error_address();
	
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

/* {SOCKET_RESOURCES}.busy_address */
EIF_TYPED_VALUE F964_8299 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "busy_address";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13738);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13738);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) busy_address();
	
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

/* {SOCKET_RESOURCES}.bound_address */
EIF_TYPED_VALUE F964_8300 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bound_address";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13739);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13739);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) bound_address();
	
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

/* {SOCKET_RESOURCES}.no_access */
EIF_TYPED_VALUE F964_8301 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_access";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13740);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13740);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_access();
	
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

/* {SOCKET_RESOURCES}.unreadable */
EIF_TYPED_VALUE F964_8302 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unreadable";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13741);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13741);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) unreadable();
	
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

/* {SOCKET_RESOURCES}.no_connect */
EIF_TYPED_VALUE F964_8303 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_connect";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13742);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13742);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_connect();
	
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

/* {SOCKET_RESOURCES}.would_block */
EIF_TYPED_VALUE F964_8304 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "would_block";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13743);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13743);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) would_block();
	
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

/* {SOCKET_RESOURCES}.in_use */
EIF_TYPED_VALUE F964_8305 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "in_use";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13744);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13744);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) in_use();
	
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

/* {SOCKET_RESOURCES}.socket_expire */
EIF_TYPED_VALUE F964_8306 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_expire";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13745);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13745);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) socket_expire();
	
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

/* {SOCKET_RESOURCES}.connect_refused */
EIF_TYPED_VALUE F964_8307 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect_refused";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13746);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13746);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) connect_refused();
	
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

/* {SOCKET_RESOURCES}.no_network */
EIF_TYPED_VALUE F964_8308 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_network";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13747);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13747);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_network();
	
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

/* {SOCKET_RESOURCES}.no_option */
EIF_TYPED_VALUE F964_8309 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_option";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13748);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13748);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_option();
	
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

/* {SOCKET_RESOURCES}.c_einprogress */
EIF_TYPED_VALUE F964_8310 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_einprogress";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13749);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13749);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_einprogress();
	
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

/* {SOCKET_RESOURCES}.sock_raw */
EIF_TYPED_VALUE F964_8311 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_raw";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13750);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13750);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_raw();
	
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

/* {SOCKET_RESOURCES}.sock_dgrm */
EIF_TYPED_VALUE F964_8312 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_dgrm";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13751);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13751);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_dgrm();
	
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

/* {SOCKET_RESOURCES}.sock_stream */
EIF_TYPED_VALUE F964_8313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_stream";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13658);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13658);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_stream();
	
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

/* {SOCKET_RESOURCES}.af_ns */
EIF_TYPED_VALUE F964_8314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_ns";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13659);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13659);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_ns();
	
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

/* {SOCKET_RESOURCES}.af_inet */
EIF_TYPED_VALUE F964_8315 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13660);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13660);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_inet();
	
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

/* {SOCKET_RESOURCES}.af_inet6 */
EIF_TYPED_VALUE F964_8316 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet6";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13661);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13661);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_inet6();
	
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

/* {SOCKET_RESOURCES}.af_unix */
EIF_TYPED_VALUE F964_8317 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_unix";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13662);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13662);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_unix();
	
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

/* {SOCKET_RESOURCES}.c_fgetown */
EIF_TYPED_VALUE F964_8318 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fgetown";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13663);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13663);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fgetown();
	
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

/* {SOCKET_RESOURCES}.c_fsetown */
EIF_TYPED_VALUE F964_8319 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fsetown";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13664);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13664);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fsetown();
	
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

/* {SOCKET_RESOURCES}.c_fsetfl */
EIF_TYPED_VALUE F964_8320 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fsetfl";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13665);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13665);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fsetfl();
	
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

/* {SOCKET_RESOURCES}.c_fgetfl */
EIF_TYPED_VALUE F964_8321 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fgetfl";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13666);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13666);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fgetfl();
	
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

/* {SOCKET_RESOURCES}.c_fndelay */
EIF_TYPED_VALUE F964_8322 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fndelay";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13667);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13667);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fndelay();
	
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

/* {SOCKET_RESOURCES}.c_fasync */
EIF_TYPED_VALUE F964_8323 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fasync";
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
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13668);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(963, Current, 13668);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fasync();
	
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

void EIF_Minit964 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
