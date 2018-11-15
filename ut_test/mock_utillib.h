#pragma once
#include "cmock/cmock.h"
#include "utillib.h"

class MockUtillib : public CMockMocker<MockUtillib>
{
public:
	MOCK_METHOD2(util_add, int32_t(int32_t, int32_t));
	MOCK_METHOD3(util_add2, int32_t(int32_t, int32_t, int32_t*));

	MOCK_METHOD0(util_print_helloworld, void());
	MOCK_METHOD1(util_print_msg, void(const char *));
};
