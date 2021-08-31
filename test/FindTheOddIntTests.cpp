#include "../findOdd.cpp"
#include <gtest/gtest.h>

using V = std::vector<int>;

TEST(FindTheOddIntTest, PositiveVar)
{
    ASSERT_EQ(5, findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}));
    ASSERT_EQ(5, findOdd(V{20,1,1,2,2,3,3,5,5,4,20,4,5}));
    ASSERT_EQ(10, findOdd(V{10}));
    ASSERT_EQ(10, findOdd(V{1,1,1,1,1,1,10,1,1,1,1}));
}

TEST(FindTheOddIntTest, NegativeVar)
{
    ASSERT_EQ(-1, findOdd(V{1,1,2,-2,5,2,4,4,-1,-2,5}));
    ASSERT_EQ(-100, findOdd(V{-100}));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}