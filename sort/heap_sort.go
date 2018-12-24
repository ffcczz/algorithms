package sort

func maxHeapify(inArr []int, startIdx, endIdx int) {
	dadIdx := startIdx
	sonIdx := dadIdx*2 + 1
	for sonIdx <= endIdx {
		if sonIdx+1 <= endIdx && inArr[sonIdx] < inArr[sonIdx+1] {
			sonIdx++
		}
		if inArr[dadIdx] > inArr[sonIdx] {
			return
		}
		inArr[dadIdx], inArr[sonIdx] = inArr[sonIdx], inArr[dadIdx]
		dadIdx = sonIdx
		sonIdx = dadIdx*2 + 1
	}
}

// heap sort - asc
func HeapSort(inArr []int) {
	len := len(inArr)
	for i := int(len/2) - 1; i >= 0; i-- {
		maxHeapify(inArr, i, len-1)
	}
	for i := len - 1; i > 0; i-- {
		inArr[0], inArr[i] = inArr[i], inArr[0]
		maxHeapify(inArr, 0, i-1)
	}
}
