#include <gtest/gtest.h>
#include <numeric>
#include <vector>
// 测试集为 MyTest，测试案例为 Sum

TEST(TestSum, Sum)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    EXPECT_EQ(sum, 15);
}

TEST(TestAdd, Add) 
{
    EXPECT_EQ(1 + 1, 2);
    ASSERT_EQ(1 + 1, 2);
}

TEST(MyTest, Sum)
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    EXPECT_EQ(3, std::accumulate(vec.begin(), vec.end(), 0));
}
TEST(MyTest, Size)
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    EXPECT_EQ(2, vec.size());
}



int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
