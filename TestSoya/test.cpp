#include "pch.h"
#include <string>
#include "FizzBuzz.h"
#include "Section.h"
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
	class TestXYZ : public ::testing::Test
	{
	protected:
		virtual void SetUp() {
			xyz = XYZ(1, 1, 1);
		}
		XYZ xyz;
	};
	TEST_F(TestXYZ, xMove) {

		XYZ retxyz = xyz.moveX(1);
		EXPECT_TRUE(XYZ(2, 1, 1) == retxyz);
	}
	TEST_F(TestXYZ, yMove) {

		XYZ retxyz = xyz.moveY(1);
		EXPECT_TRUE(XYZ(1, 2, 1) == retxyz);
	}
	TEST_F(TestXYZ, zMove) {
		XYZ retxyz = xyz.moveZ(1);
		EXPECT_TRUE(XYZ(1, 1, 2) == retxyz);
	}
	class TestXYZRot : public ::testing::Test
	{
	protected:
		virtual void SetUp() {
			xyz = XYZ(0, 0, 1);
		}
		XYZ xyz;
	};
	TEST_F(TestXYZRot, xRot) {
		XYZ retxyz = xyz.rotX(90);
		EXPECT_TRUE(XYZ(0, -1, 0) == retxyz);
	}
	TEST_F(TestXYZRot, yRot) {
		XYZ retxyz = xyz.rotY(90);
		EXPECT_TRUE(XYZ(1, 0, 0) == retxyz);
	}
	TEST_F(TestXYZRot, zRot) {
		XYZ retxyz = xyz.rotZ(90);
		EXPECT_TRUE(XYZ(0, 0, 1) == retxyz);
	}
}
namespace TestSection
{
	class TestSectionF : public ::testing::Test
	{
	protected:
		virtual void SetUp() {
			for (int i = 0; i < 36; i++)
			{
				double radKaku=M_PI*(10.0*i / 180);
				double x = cos(radKaku)*100;
				double y = sin(radKaku)*100;
				section.addXYZ(XYZ(x,y,0));

			}
		}
		Section section;
	};
	TEST_F(TestSectionF, idoX)
	{
	
		Section sectionMove=section.moveX(1);
		EXPECT_TRUE(XYZ(101, 0, 0)== sectionMove.getXYZ(0));
	}
	TEST_F(TestSectionF, idoY)
	{

		Section sectionMove = section.moveY(1);
		EXPECT_TRUE(XYZ(0, 101, 0) == sectionMove.getXYZ(9));
	}

}