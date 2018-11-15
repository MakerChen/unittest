#include "mock_utillib.h"

CMOCK_MOCK_FUNCTION2(MockUtillib, util_add, int32_t(int32_t, int32_t));
CMOCK_MOCK_FUNCTION3(MockUtillib, util_add2, int32_t(int32_t, int32_t, int32_t*));

CMOCK_MOCK_FUNCTION0(MockUtillib, util_print_helloworld, void());
CMOCK_MOCK_FUNCTION1(MockUtillib, util_print_msg, void(const char *));
