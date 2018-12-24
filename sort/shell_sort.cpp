// +build ignore
// from golang

#include "shell_sort.h"

// shell sort - asc
void shellSort(std::vector<int> &inArr) {
    int size = inArr.size();
    if (size <= 1) return;
    for(int incr=size/2; incr>0; incr/=2) {
        for(int g=0; g<incr; g++) { // group
            for(int i=g; i<size-incr; i+=incr) { // insert sort
               for(int k=i; k<size; k+=incr) {
                   if(inArr[i]>inArr[k]) {
                        int tmp = inArr[i];
                        inArr[i] = inArr[k];
                        inArr[k] = tmp;
                    }
               }
            }
        }
    }
}