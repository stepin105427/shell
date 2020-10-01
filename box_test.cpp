#include<gtest/gtest.h>
#include"box.cpp"
TEST(Box,test)
{
    Box b1(1,2,3);
    EXPECT_EQ(1,b1.length(1));
    EXPECT_EQ(6,b1.volume());
}
int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
