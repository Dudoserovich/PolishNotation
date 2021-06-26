#include "pch.h"
#include "gtest/gtest.h"
#include <iostream>

using namespace std;

TEST(Test1, Plus) {
    char* input = "1+1";
    ASSERT_DOUBLE_EQ(2, RPN(input));

    input = "2 + 3";
    ASSERT_DOUBLE_EQ(5, RPN(input));

    input = "1+(2+(3+4)+5)+6+7+8+9+0";
    ASSERT_DOUBLE_EQ(45, RPN(input));
}

TEST(Test2, PlusAndMultiply) {
    char* input = "(2 * 3) + (4 * 5)";
    ASSERT_DOUBLE_EQ(26, RPN(input));

    input = "(1+2)*4+3";
    ASSERT_DOUBLE_EQ(15, RPN(input));
}

TEST(Test3, Multiply) {
    char* input = "5*4*3*2*1";
    ASSERT_DOUBLE_EQ(120, RPN(input));
}

TEST(Test4, Division) {
    char* input = "0/8";
    ASSERT_DOUBLE_EQ(0, RPN(input));

    input = "9/2/3/1";
    ASSERT_DOUBLE_EQ(1, RPN(input));
}

TEST(Test5, Mod) {
    char* input = "4%2";
    ASSERT_DOUBLE_EQ(0, RPN(input));

    input = "7%2";
    ASSERT_DOUBLE_EQ(1, RPN(input));
}

TEST(Test6, Other) {

    char* input = "2 / (3 - (4 + (5 * 6)))";
    ASSERT_DOUBLE_EQ(0, RPN(input));

    input = "8*(5-6)";
    ASSERT_DOUBLE_EQ(-8, RPN(input));

    input = "(1-3)*(1-4)";
    ASSERT_DOUBLE_EQ(6, RPN(input));

    input = "((4 + 3)* (3 - 1)) / 2 % 3";
    ASSERT_DOUBLE_EQ(1, RPN(input));

    input = "    6";
    ASSERT_DOUBLE_EQ(6, RPN(input));

    input = "5    ";
    ASSERT_DOUBLE_EQ(5, RPN(input));

    input = "(1-(2+(2*4)))-(((2*4)+2)-1)";
    ASSERT_DOUBLE_EQ(-18, RPN(input));
}

TEST(Test13, Barrets) {
    char* input = "(6+(7-(8*(9/5))))";
    ASSERT_DOUBLE_EQ(5, RPN(input));

    input = "(1+3) * (3-2) / (7+3) + (2 + 1)-(4-2)";
    ASSERT_DOUBLE_EQ(1, RPN(input));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}