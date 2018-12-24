package sort

// merge sort - asc
func MergeSort(inArr []int) []int {
	if len(inArr) <= 1 {
		return inArr
	}
	midIdx := len(inArr) / 2
	return merge(MergeSort(inArr[:midIdx]), MergeSort(inArr[midIdx:]))
}

func merge(leftArr, rightArr []int) (result []int) {
	l, r := 0, 0
	for l < len(leftArr) && r < len(rightArr) {
		if leftArr[l] < rightArr[r] {
			result = append(result, leftArr[l])
			l++
		} else {
			result = append(result, rightArr[r])
			r++
		}
	}
	result = append(result, leftArr[l:]...)
	result = append(result, rightArr[r:]...)
	return
}
