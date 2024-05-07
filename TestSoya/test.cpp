#include "pch.h"
#include <string>
#include "FizzBuzz.h"
#include "XYZ.h"
using namespace std;
namespace TestInputNumToFizzBuzz
{
	class TestFizzBuzz : public ::testing::Test
	{
	protected:
		virtual void SetUp() {
			FizzBuzz fizzBuzz;
		}
		FizzBuzz fizzBuzz;
	};

	TEST_F(TestFizzBuzz, input1) {
		EXPECT_EQ(fizzBuzz.change(1), "1");

	}
	TEST_F(TestFizzBuzz, input3) {
		EXPECT_EQ(fizzBuzz.change(3), "Fizz");

	}
	TEST_F(TestFizzBuzz, input5) {
		EXPECT_EQ(fizzBuzz.change(5), "Buzz");

	}

	TEST_F(TestFizzBuzz, input15) {
		EXPECT_EQ(fizzBuzz.change(15), "FizzBuzz");

	}
}
namespace TestKeijyoIdo
{
	TEST(Test_XYZ, yIdo) {
		XYZ xyz ;
		XYZ retxyz=xyz.idoY(1);
		EXPECT_EQ(1, retxyz.y);
	}
	TEST(Test_XYZ, xIdo) {
		XYZ xyz;
		XYZ retxyz = xyz.idoX(1);
		EXPECT_EQ(1, retxyz.x);
	}
}