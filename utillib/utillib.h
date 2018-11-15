#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int32_t		util_add(int32_t s32Input1, int32_t s32Input2);
int32_t		util_add2(int32_t s32Input1, int32_t s32Input2, int32_t *ps32Result);

void		util_print_helloworld();
void		util_print_msg(const char *pszString);

#ifdef __cplusplus
}
#endif
