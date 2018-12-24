// +build ignore
// from golang

#include "merge_sort.h"

using namespace std;

vector<int> _splitVector(vector<int> inArr, int beginIdx, int endIdx) {
    vector<int> result;
    for(int i=beginIdx; i<=endIdx; ++i) {
        result.push_back(inArr[i]);
    }
    return result;
}

vector<int> _appendVector(vector<int> result, vector<int> newArr) {
    for (int i=0; i<int(newArr.size()); ++i) result.push_back(newArr[i]);
    return result;
}

vector<int> _merge(vector<int> leftArr, vector<int> rightArr) {
    int l=0, r=0;
    vector<int> result;
    while(l<int(leftArr.size()) && r<int(rightArr.size())) {
        if (leftArr[l] < rightArr[r]) {
			result.push_back(leftArr[l]);
            l++;
		} else {
            result.push_back(rightArr[r]);
			r++;
		}
    }
    result = _appendVector(result, _splitVector(leftArr, l, leftArr.size()-1));
	result = _appendVector(result, _splitVector(rightArr, r, rightArr.size()-1));
	return result;
}

// merge sort - asc - noob
// TODO: to be optimized
vector<int> mergeSort(vector<int> inArr) {
    if (inArr.size() <= 1) return inArr;
    int midIdx = inArr.size() / 2;
    return _merge(mergeSort(_splitVector(inArr, 0, midIdx-1)), mergeSort(_splitVector(inArr, midIdx, inArr.size()-1)));
}