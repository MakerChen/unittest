#pragma once
#include "gtest/gtest.h"
#include "test.h"

class testFixture : public ::testing::Test
{
protected:
	testFixture() = default;
	virtual ~testFixture() = default;
};
