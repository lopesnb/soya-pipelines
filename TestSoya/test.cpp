#include "pch.h"
#include <string>
#include "FizzBuzz.h"
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
