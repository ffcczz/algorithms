// +build ignore
// from golang

#include "insertion_sort.h"

#include "gtest/gtest.h"

using namespace std;

TEST(SorTest, InsertionSort) {
    vector<int> inArr;
    inArr.push_back(0);
    inArr.push_back(18);
    inArr.push_back(4);
    inArr.push_back(11);
    inArr.push_back(12);
    inArr.push_back(-1);
    insertionSort(inArr);
    EXPECT_EQ(6, inArr.size());
    EXPECT_EQ(-1, inArr[0]);
    EXPECT_EQ(0, inArr[1]);
    EXPECT_EQ(4, inArr[2]);
    EXPECT_EQ(11, inArr[3]);
    EXPECT_EQ(12, inArr[4]);
    EXPECT_EQ(18, inArr[5]);
}