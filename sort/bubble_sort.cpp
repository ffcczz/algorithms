// +build ignore
// from golang

#include "bubble_sort.h"

using namespace std;

// bubble sort - asc
void bubbleSort(vector<int> &inArr) {
    int size = inArr.size();
    for(int i=0; i<size-1; ++i) {
        for(int z=0; z<size-i-1; ++z) {
            if (inArr[z] > inArr[z+1]) {
                int tmp = inArr[z+1];
                inArr[z+1] = inArr[z];
                inArr[z] = tmp;
            }
        }
    }
}