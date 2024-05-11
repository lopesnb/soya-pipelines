#include "pch.h"
#include <string>
#include "FizzBuzz.h"
#include "Measure.h"
#include "Shape.h"
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
			Measure measure(100, 0, 0, 0);
			section = measure.makeSection();
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

namespace TestMeasure
{

	TEST(TestMeasure, idoZero)
	{
		Measure measure(50, 0, 0, 0);
		Section section =measure.makeSection();
		EXPECT_TRUE(XYZ(-50,0,0)==section.getXYZ(18));
	}
	TEST(TestMeasure, idoXYadd10)
	{
		Measure measure(50, 10, 10, 0);
		Section section = measure.makeSection();
		EXPECT_TRUE(XYZ(-40, 10, 0) == section.getXYZ(18));
	}
}
namespace TestShape
{
	class TestShapeF : public ::testing::Test
	{
	protected:
		virtual void SetUp() {
			Section sections[5];
			Measure measure(50, 0, 10, 0);
			sections[0]= measure.makeSection();
			Measure measure1(60, 0, 20, 0);
			sections[1] = measure1.makeSection();
			Measure measure2(70, 0, 30, 0);
			sections[2] = measure2.makeSection();
			Measure measure3(80, 0, 25, 0);
			sections[3] = measure3.makeSection();
			Measure measure4(90, 0, 15, 0);
			sections[4] = measure4.makeSection();
			Shape shapewk(sections);
			shape = shapewk;
		}
		Shape shape;
	};
	TEST_F(TestShapeF, idoZero)
	{
		shape.section[0].getXYZ(1);
		EXPECT_TRUE(XYZ(-50, 10, 0) == shape.section[0].getXYZ(18));
		EXPECT_TRUE(XYZ(-90, 15, 0) == shape.section[4].getXYZ(18));
	}

}