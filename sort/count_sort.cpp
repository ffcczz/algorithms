// +build ignore
// from golang

#include "count_sort.h"

// count sort - asc
// input: 0 ~ MAX_INTEGER
std::vector<unsigned int> countSort(std::vector<unsigned int> inArr) {
    int size = inArr.size();
    if (size <= 1) return inArr;
    unsigned int maxValue=inArr[0], minValue = inArr[0];
    for(int i=1; i<size; ++i) {
        if(maxValue < inArr[i]) maxValue = inArr[i];
        if(minValue > inArr[i]) minValue = inArr[i];
    }
    std::vector<unsigned int> tmpArr(maxValue+1);
    for(int i=0; i<size; ++i) tmpArr[inArr[i]] += 1;
    std::vector<unsigned int> result;
    for(int i=minValue; i<int(tmpArr.size()); ++i) {
        int count = tmpArr[i];
        while(count > 0) {
            result.push_back(i);
            --count;
        }
    }
    return result;
}