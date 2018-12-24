// +build ignore
// from golang

#include "insertion_sort.h"

using namespace std;

// insertion sort - asc
void insertionSort(vector<int> &inArr) {
    for(int i=1; i<int(inArr.size()); ++i) {
        for(int z=i; z>0 && inArr[z] < inArr[z-1]; --z) {
            int tmp = inArr[z];
            inArr[z] = inArr[z-1];
            inArr[z-1] = tmp;
        }
    }
}