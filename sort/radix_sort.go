package sort

func getDigit(value, bit uint) (result uint) {
	for ; bit > 0; bit-- {
		result = value % 10
		value /= 10
	}
	return
}

// radix sort - asc
func RadixSort(inArr []uint) []uint {
	l := len(inArr)
	if l <= 1 {
		return inArr
	}
	// find max digit
	var maxDigit uint
	for i := 0; i < l; i++ {
		if maxDigit < inArr[i] {
			maxDigit = inArr[i]
		}
	}
	var flag uint
	for maxDigit > 0 {
		maxDigit /= 10
		flag++
	}
	maxDigit = flag
	// sort
	var d uint = 1
	for d <= maxDigit {
		var tmpArr [10][]uint
		for i := 0; i < l; i++ {
			tmpArr[getDigit(inArr[i], d)] = append(tmpArr[getDigit(inArr[i], d)], inArr[i])
		}
		inArr = make([]uint, 0)
		for i := 0; i < 10; i++ {
			for z := 0; z < len(tmpArr[i]); z++ {
				inArr = append(inArr, tmpArr[i][z])
			}
		}
		d++
	}
	return inArr
}
