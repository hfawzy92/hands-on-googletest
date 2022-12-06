#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"

int sum(int a , int b);

TEST(SumFunction , TEST_00)
{
    EXPECT_EQ(6 , sum(2 , 3));
}

int main()
{
    std::cout << "Hello gtest..";
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}