#include "test.h"
#include "utillib.h"

// -----------------------------------------------------------------------------
int32_t test_add(int32_t s32Input1, int32_t s32Input2)
{
	if ((s32Input1 < 0) || (s32Input1 > 500))
	{
		return -1;
	}

	if ((s32Input2 < 0) || (s32Input2 > 500))
	{
		return -2;
	}

	return (s32Input1 + s32Input2);
}

// -----------------------------------------------------------------------------
int32_t test_utiladd(int32_t s32Input1, int32_t s32Input2)
{
	return util_add(s32Input1, s32Input2);
}

// -----------------------------------------------------------------------------
int32_t test_utiladd2(int32_t s32Input1, int32_t s32Input2)
{
	int32_t		s32Status, s32Result;

	s32Status = util_add2(s32Input1, s32Input2, &s32Result);

	if (s32Status < 0)
	{
		util_print_msg("Fail");
		return s32Status;
	}

	util_print_helloworld();
	return s32Result;
}

// -----------------------------------------------------------------------------
