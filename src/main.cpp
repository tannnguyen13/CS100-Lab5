#include "gtest/gtest.h"

#include "rectangle.cpp"

int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Constructor, Default) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test->area(), 0);
}

TEST(Constructor, One) {
	Rectangle* test = new Rectangle(1,1);
	EXPECT_EQ(test->area(), 1);
}


TEST(Constructor, Zeros) {
	Rectangle* test = new Rectangle(0,0);
	EXPECT_EQ(test->area(), 0);
}

TEST(Area, TwoInts) {
	Rectangle* test = new Rectangle(2,3);
	EXPECT_EQ(test->area(), 6);
}

TEST(Area, NegativeNumbers) {
	Rectangle* test = new Rectangle(-2,1);
	EXPECT_EQ(test->area(), -2);
}
TEST(Area, TwoNegativeNumbers) {
        Rectangle* test = new Rectangle(-2,-1);
        EXPECT_EQ(test->area(), 2);
}
TEST(Perimeter, PosNums) {
        Rectangle* test = new Rectangle(5,7);
        EXPECT_EQ(test->perimeter(), 24);
}
TEST(Perimeter, MixedNums) {
        Rectangle* test = new Rectangle(-3,2);
        EXPECT_EQ(test->perimeter(), -2);
}
TEST(Perimeter, NegNums) {
        Rectangle* test = new Rectangle(-3,-4);
        EXPECT_EQ(test->perimeter(), -14);
}




