// +build ignore
// from golang

#include "quick_sort.h"

#include "gtest/gtest.h"

using namespace std;

TEST(SortTest, QuickSort) {
    int inArr[9] = {21, 31, 2, 3, 11, 9, 8, -10, -2};
    quickSort(inArr, 0, sizeof(inArr) / sizeof(inArr[0]) - 1);
    EXPECT_EQ(-10, inArr[0]);
    EXPECT_EQ(-2, inArr[1]);
    EXPECT_EQ(2, inArr[2]);
    EXPECT_EQ(3, inArr[3]);
    EXPECT_EQ(8, inArr[4]);
    EXPECT_EQ(9, inArr[5]);
    EXPECT_EQ(11, inArr[6]);
    EXPECT_EQ(21, inArr[7]);
    EXPECT_EQ(31, inArr[8]);
}