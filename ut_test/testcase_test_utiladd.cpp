#include "testcase.hpp"
#include "mock_utillib.h"

using ::testing::Return;

typedef testFixture		TestUtilAdd;
// -----------------------------------------------------------------------------
TEST_F(TestUtilAdd, NormalCase)
{
	// arrange
	int32_t		s32Input1, s32Input2;
	int32_t		s32ExpectResult;

	s32Input1		= 100;
	s32Input2		= 200;
	s32ExpectResult	= 300;

	MockUtillib		mockutillib;

	EXPECT_CALL(mockutillib, util_add(s32Input1, s32Input2))
		.WillOnce(Return(s32ExpectResult));

	// action
	int32_t s32Result = test_utiladd(s32Input1, s32Input2);

	// assert
	ASSERT_EQ(s32Result, s32ExpectResult);
}

// -----------------------------------------------------------------------------
