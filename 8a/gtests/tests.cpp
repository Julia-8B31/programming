#include <gtest/gtest.h>
#include <main.h>

TEST(Test1, example){
    std::vector<std::vector<int>> bushes1={{0,0},{2,1},{0,1},{0,2},{1,1}};
    std::vector<std::vector<int>> bushes2={{0,0},{0,2},{1,1},{2,1}};
    ASSERT_EQ(def8(bushes1), bushes2);
}
