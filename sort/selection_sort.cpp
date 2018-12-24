// +build ignore
// from golang

#include "selection_sort.h"

using namespace std;

// selection sort - desc
void selectionSort(vector<int> &inArr) {
    int size = inArr.size();
    for(int i=0; i<size-1; ++i) {
        for(int z=i; z<size-1; ++z) {
            if (inArr[i] < inArr[z]) {
                int tmp = inArr[i];
                inArr[i] = inArr[z];
                inArr[z] = tmp;
            }
        }
    }
}