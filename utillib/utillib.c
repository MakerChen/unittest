#include "utillib.h"

// -----------------------------------------------------------------------------
int32_t util_add(int32_t s32Input1, int32_t s32Input2)
{
	printf("util_add\n");
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
int32_t util_add2(int32_t s32Input1, int32_t s32Input2, int32_t *ps32Result)
{
	printf("util_add2\n");
	if ((s32Input1 < 0) || (s32Input1 > 500))
	{
		return -1;
	}

	if ((s32Input2 < 0) || (s32Input2 > 500))
	{
		return -1;
	}

	*ps32Result = s32Input1 + s32Input2;

	return 0;
}

// -----------------------------------------------------------------------------
void util_print_helloworld()
{
	printf("util_print_helloworld\n");
	printf("Hello World\n");
}

// -----------------------------------------------------------------------------
void util_print_msg(const char *pszString)
{
	printf("util_print_msg\n");
	if (NULL != pszString)
	{
		printf("%s\n", pszString);
	}
}

// -----------------------------------------------------------------------------
