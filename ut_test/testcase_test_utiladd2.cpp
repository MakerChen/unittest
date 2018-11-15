#include "testcase.hpp"
#include "mock_utillib.h"

using ::testing::Return;
using ::testing::_;
using ::testing::SetArgPointee;
using ::testing::DoAll;

typedef testFixture		TestUtilAdd2;
// -----------------------------------------------------------------------------
TEST_F(TestUtilAdd2, NormalCase)
{
	// arrange
	int32_t		s32Input1, s32Input2;
	int32_t		s32ExpectResult;

	s32Input1		= 100;
	s32Input2		= 200;
	s32ExpectResult	= 300;

	MockUtillib		mockutillib;

	EXPECT_CALL(mockutillib, util_add2(s32Input1, s32Input2, _))
		.WillOnce(DoAll(SetArgPointee<2>(s32ExpectResult), Return(0)));

	EXPECT_CALL(mockutillib, util_print_msg(_))
		.Times(0);
	EXPECT_CALL(mockutillib, util_print_helloworld())
		.Times(1);

	// action
	int32_t s32Result = test_utiladd2(s32Input1, s32Input2);

	// assert
	ASSERT_EQ(s32Result, s32ExpectResult);
}

// -----------------------------------------------------------------------------
TEST_F(TestUtilAdd2, InvalidInputFailCase)
{
	// arrange
	int32_t		s32Input1, s32Input2;

	s32Input1		= 100;
	s32Input2		= -200;

	MockUtillib		mockutillib;

	EXPECT_CALL(mockutillib, util_add2(s32Input1, s32Input2, _))
		.WillOnce(Return(-1));

	EXPECT_CALL(mockutillib, util_print_msg(_))
		.Times(1);
	EXPECT_CALL(mockutillib, util_print_helloworld())
		.Times(0);

	// action
	int32_t s32Result = test_utiladd2(s32Input1, s32Input2);

	// assert
	ASSERT_EQ(s32Result, -1);
}

// -----------------------------------------------------------------------------
