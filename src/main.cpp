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
