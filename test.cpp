
#include "gtest/gtest.h"
#include "mesTests.cpp"

Op* O1=new Op(17.35);
Op* O2= new Op(45.2);
Op* O3=new Op(-25.45);
Op* O4=new Op(-6.0);
Absolute* A1=new Absolute(O3);
Ceil* C1=new Ceil(O3);
Floor* F1=new Floor(O3);
TEST(CeillingTest, PositiveCeil)
{
	ASSERT_EQ(18, ceilling(O1));
	ASSERT_EQ(46, ceilling(O2));
};
TEST(CeillingTest, NegativeCeil)
{
	ASSERT_EQ(-25, ceilling(O3));
	ASSERT_EQ(-6, ceilling(O4));
};
TEST(FloorTest, PositiveFloor)
{
	ASSERT_EQ(17, floor(O1));
	ASSERT_EQ(45,floor(O2));
};
TEST(FloorTest, NegativeFloor)
{
	ASSERT_EQ(-26, floor(O3));
	ASSERT_EQ(-6,floor(O4));
};
TEST(AbsoluteTest, PositiveAbs)
{
	ASSERT_EQ(17.35, absolute(O1));
	ASSERT_EQ(45.2,absolute(O2));
};
TEST(AbsoluteTest, NegativeAbs)
{
	ASSERT_EQ(25.45, absolute(O3));
	ASSERT_EQ(6.0, absolute(O4));
};
TEST(Combination, AbsCeil)
{
	ASSERT_EQ(26,ceilling(A1));
	ASSERT_EQ(25, absolute(C1));
};
TEST(Combination, AbsFloor)
{
	ASSERT_EQ(25, floor(A1));
	ASSERT_EQ(26, absolute(F1));
};
TEST(Combination, CeilFloor)
{
	ASSERT_EQ(-25, floor(C1));
	ASSERT_EQ(-26, ceilling(F1));
};

int main(int argc, char **argv) {
	  ::testing::InitGoogleTest(&argc, argv);
	    return RUN_ALL_TESTS();
}
