#include <gtest/gtest.h>
#include <main.h>

TEST(Test1, example1){
    std::vector<std::vector<int>> b1={{1,1},{2,2},{3,3},{3,1}};
    std::vector<std::vector<int>> b2={{1,1},{3,1},{3,3}};
    ASSERT_EQ(def8(b1), b2);
}

TEST(Test2, example2){
    std::vector<std::vector<int>> b1={{0,1},{2,2},{-3,3},{3,0}};
    std::vector<std::vector<int>> b2={{-3,3},{3,0}};
    ASSERT_EQ(def8(b1), b2);
}

TEST(Test3, example3){
    std::vector<std::vector<int>> b1={{3,3},{-3,0}};
    std::vector<std::vector<int>> b2={{-3,0},{3,3}};
    ASSERT_EQ(def8(b1), b2);
}
