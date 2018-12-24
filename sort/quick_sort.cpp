// +build ignore
// from golang

#include "quick_sort.h"

// quick sort - asc
void quickSort(int a[], int low, int high) {
    if(low >= high) return;
    int first = low, last = high, key = a[first];
    while(first < last) {
        while(first < last && a[last] >= key) --last;
        a[first] = a[last];
        while(first < last && a[first] <= key) ++first;
        a[last] = a[first];    
    }
    a[first] = key;
    quickSort(a, low, first-1);
    quickSort(a, first+1, high);
}