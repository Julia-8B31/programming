#include <gtest/gtest.h>
#include <main.h>

TEST(Test1, example1){
    ASSERT_EQ(def7(1), 2);
}

TEST(Test2, example2){
    ASSERT_EQ(def7(4), 4);
}

TEST(Test3, example3){
    ASSERT_EQ(def7(7), 5);
}
