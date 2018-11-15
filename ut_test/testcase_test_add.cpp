#include "testcase.hpp"

typedef testFixture		TestAdd;
// -----------------------------------------------------------------------------
TEST_F(TestAdd, NormalCase)
{
	// arrange
	int32_t		s32Input1, s32Input2;

	s32Input1	= 100;
	s32Input2	= 200;

	// action
	int32_t s32Result = test_add(s32Input1, s32Input2);

	// assert
	ASSERT_EQ(s32Result, 300);
}

// -----------------------------------------------------------------------------
