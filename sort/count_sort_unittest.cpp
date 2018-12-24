// +build ignore
// from golang

#include "count_sort.h"

#include "gtest/gtest.h"

using namespace std;

TEST(SortTest, CountSort) {
    vector<unsigned int> inArr;
    inArr.push_back(0);
    inArr.push_back(18);
    inArr.push_back(4);
    inArr.push_back(11);
    inArr.push_back(12);
    inArr.push_back(1);
    inArr = countSort(inArr);
    EXPECT_EQ(6, inArr.size());
    EXPECT_EQ(0, inArr[0]);
    EXPECT_EQ(1, inArr[1]);
    EXPECT_EQ(4, inArr[2]);
    EXPECT_EQ(11, inArr[3]);
    EXPECT_EQ(12, inArr[4]);
    EXPECT_EQ(18, inArr[5]);

    inArr.clear();
    inArr.push_back(592);
    inArr.push_back(401);
    inArr.push_back(874);
    inArr.push_back(141);
    inArr.push_back(348);
    inArr.push_back(72);
    inArr.push_back(911);
    inArr.push_back(887);
    inArr.push_back(820);
    inArr.push_back(283);
    inArr = countSort(inArr);
    EXPECT_EQ(10, inArr.size());
    EXPECT_EQ(72, inArr[0]);
    EXPECT_EQ(141, inArr[1]);
    EXPECT_EQ(283, inArr[2]);
    EXPECT_EQ(348, inArr[3]);
    EXPECT_EQ(401, inArr[4]);
    EXPECT_EQ(592, inArr[5]);
    EXPECT_EQ(820, inArr[6]);
    EXPECT_EQ(874, inArr[7]);
    EXPECT_EQ(887, inArr[8]);
    EXPECT_EQ(911, inArr[9]);
}