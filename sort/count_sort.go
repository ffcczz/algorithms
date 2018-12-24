package sort

// count sort - asc
// input: 0 ~ MAX_INTEGER
func CountSort(inArr []uint) []uint {
	l := len(inArr)
	if l <= 1 {
		return inArr
	}
	maxValue, minValue := inArr[0], inArr[0]
	for i := 1; i < l; i++ {
		if maxValue < inArr[i] {
			maxValue = inArr[i]
		}
		if minValue > inArr[i] {
			minValue = inArr[i]
		}
	}
	tmpArr := make([]uint, maxValue+1)
	for i := 0; i < l; i++ {
		tmpArr[inArr[i]]++
	}
	result, idx := make([]uint, l), 0
	for i := minValue; i < uint(len(tmpArr)); i++ {
		count := tmpArr[i]
		for count > 0 {
			result[idx] = i
			count--
			idx++
		}
	}
	return result
}
