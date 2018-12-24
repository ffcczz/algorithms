// +build ignore
// from golang

#include "heap_sort.h"

#include "gtest/gtest.h"

using namespace std;

TEST(SortTest, HeapSort) {
    int inArr[5] = {0, 19, 22, 10, -1};
    heapSort(inArr, 5);
    EXPECT_EQ(-1, inArr[0]);
    EXPECT_EQ(0, inArr[1]);
    EXPECT_EQ(10, inArr[2]);
    EXPECT_EQ(19, inArr[3]);
    EXPECT_EQ(22, inArr[4]);
}