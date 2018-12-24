// +build ignore
// from golang

#include "heap_sort.h"

using namespace std;

void maxHeapify(int arr[], int startIdx, int endIdx) {
    int dadIdx = startIdx, sonIdx = dadIdx * 2 + 1;
    while (sonIdx <= endIdx) {
        if (sonIdx + 1 <= endIdx && arr[sonIdx] < arr[sonIdx + 1]) sonIdx++;
        if (arr[dadIdx] > arr[sonIdx]) return;
        swap(arr[dadIdx], arr[sonIdx]);
        dadIdx = sonIdx;
        sonIdx = dadIdx * 2 + 1;
    }
}
 
void heapSort(int arr[], int len) {
    for (int i = len / 2 - 1; i >= 0; i--)
        maxHeapify(arr, i, len - 1);
    for (int i = len - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, 0, i - 1);
    }
}