package sort

// selection sort - desc
func SelectionSort(inArr []int) {
	for i := 0; i < len(inArr)-1; i++ {
		for z := i; z < len(inArr)-1; z++ {
			if inArr[i] < inArr[z] {
				inArr[i], inArr[z] = inArr[z], inArr[i]
			}
		}
	}
}
