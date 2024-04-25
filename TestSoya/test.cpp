#include "pch.h"
#include <string>
#include "FizzBuzz.h"
using namespace std;
TEST(TestCaseName1, TestName) {
	FizzBuzz fizzBuzz;
	EXPECT_EQ(fizzBuzz.change(1), "1");
	EXPECT_EQ(fizzBuzz.change(2), "2");

}
TEST(TestCaseName2, TestName) {
	FizzBuzz fizzBuzz;
	EXPECT_EQ(fizzBuzz.change(3), "Fizz");

}
