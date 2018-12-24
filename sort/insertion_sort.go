package sort

// insertion sort - asc
func InsertionSort(inArr []int) {
	for i := 1; i < len(inArr); i++ {
		for z := i; z > 0 && inArr[z] < inArr[z-1]; z-- {
			inArr[z], inArr[z-1] = inArr[z-1], inArr[z]
		}
	}
}
