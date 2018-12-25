// +build ignore
// from golang

#include "radix_sort.h"
#include <iostream>

unsigned int getDigit(unsigned int value, int bit) {
    unsigned  int result;
    while(bit--) {
        result = value % 10;
        value /= 10;
    }
    return result;
} 

// radix sort - asc
std::vector<unsigned int> radixSort(std::vector<unsigned int> inArr) {
    int size = inArr.size();
    if (size <= 1) return inArr;
    // find max digit
    unsigned int maxDigit = 0;
    for(int i=0; i<size; ++i) 
        if (maxDigit < inArr[i]) maxDigit = inArr[i];
    int flag = 0;
    while(maxDigit > 0) {
        maxDigit /= 10;
        ++flag;
    }
    maxDigit = flag;
    // sort
    unsigned int d = 1;
    while(d <= maxDigit) {
        std::vector<std::vector<unsigned int>> tmpArr(10);
        for(int i=0; i<int(inArr.size()); ++i) tmpArr[getDigit(inArr[i], d)].push_back(inArr[i]);
        inArr.clear();
        for(int i=0; i<10; ++i) {
            for(int z=0; z<int(tmpArr[i].size()); ++z) inArr.push_back(tmpArr[i][z]);
        }
        ++d;
    }
    return inArr;
}