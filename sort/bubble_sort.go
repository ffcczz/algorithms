package sort

// bubble sort - asc
func BubbleSort(inArr []int) {
	for i := 0; i < len(inArr)-1; i++ {
		for z := 0; z < len(inArr)-i-1; z++ {
			if inArr[z] > inArr[z+1] {
				inArr[z], inArr[z+1] = inArr[z+1], inArr[z]
			}
		}
	}
}
