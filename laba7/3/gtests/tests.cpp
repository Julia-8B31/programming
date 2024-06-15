#include <gtest/gtest.h>
#include <main.h>

TEST(Test1, example1){
    ASSERT_EQ(def3("x+2x+1-2=6+x-1"), "x=3");
}

TEST(Test2, example2){
    ASSERT_EQ(def3("x+2=x+2"), "Infinite");
}

TEST(Test3, example3){
    ASSERT_EQ(def3("x+2=x+1"), "NO");
}

