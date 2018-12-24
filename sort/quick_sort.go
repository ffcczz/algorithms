package sort

// quick sort - asc
func QuickSort(inArr []int) {
	if len(inArr) <= 1 {
		return
	}
	mid, i, head, tail := inArr[0], 1, 0, len(inArr)-1
	for head < tail {
		if inArr[i] > mid {
			inArr[i], inArr[tail] = inArr[tail], inArr[i]
			tail--
			continue
		}
		inArr[i], inArr[head] = inArr[head], inArr[i]
		head++
		i++
	}
	inArr[head] = mid
	QuickSort(inArr[:head])
	QuickSort(inArr[head+1:])
}
