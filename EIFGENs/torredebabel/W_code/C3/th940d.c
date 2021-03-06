/*
 * Class THREAD_CONTROL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_940 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_940 [] = {0xFF01,237,939,0xFFFF};
static const EIF_TYPE_INDEX egt_2_940 [] = {0xFF01,939,0xFFFF};
static const EIF_TYPE_INDEX egt_3_940 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_940 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_940 [] = {0xFF01,939,0xFFFF};
static const EIF_TYPE_INDEX egt_6_940 [] = {0xFF01,939,0xFFFF};
static const EIF_TYPE_INDEX egt_7_940 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_940 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_940 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_940 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_940 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_940 [] = {0xFF01,939,0xFFFF};


static const struct desc_info desc_940[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_940), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_940), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_940), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_940), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_940), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_940), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_940), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_940), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_940), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_940), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_940), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_940), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0757 /*939*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_940), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 13458, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 13459, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13460, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13461, 0xFFFFFFFF},
};
void Init940(void)
{
	IDSC(desc_940, 0, 939);
	IDSC(desc_940 + 1, 1, 939);
	IDSC(desc_940 + 32, 462, 939);
	IDSC(desc_940 + 34, 480, 939);
}


#ifdef __cplusplus
}
#endif
