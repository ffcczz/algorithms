package sort

// shell sort - asc
func ShellSort(inArr []int) {
	l := len(inArr)
	if l <= 1 {
		return
	}
	for incr := l / 2; incr > 0; incr /= 2 {
		for g := 0; g < incr; g++ { // group
			for i := g; i < l-incr; i += incr { // insert sort
				for k := i; k < l; k += incr {
					if inArr[i] > inArr[k] {
						inArr[i], inArr[k] = inArr[k], inArr[i]
					}
				}
			}
		}
	}
}
