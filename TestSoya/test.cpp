#include "pch.h"
#include <string>
#include "FizzBuzz.h"
using namespace std;
TEST(TestFizzBuzzQuestio, input1) {
	FizzBuzz fizzBuzz;
	EXPECT_EQ(fizzBuzz.change(1), "1");
	EXPECT_EQ(fizzBuzz.change(2), "2");

}
TEST(TestFizzBuzzQuestio, input3) {
	FizzBuzz fizzBuzz;
	EXPECT_EQ(fizzBuzz.change(3), "Fizz");

}
TEST(TestFizzBuzzQuestio, input5) {
	FizzBuzz fizzBuzz;
	EXPECT_EQ(fizzBuzz.change(5), "Buzz");

}
TEST(TestFizzBuzzQuestio, input15) {
	FizzBuzz fizzBuzz;
	EXPECT_EQ(fizzBuzz.change(15), "FizzBuzz");

}
