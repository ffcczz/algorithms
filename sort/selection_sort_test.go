package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestSelectionSort(t *testing.T) {
	inArr := []int{0, 18, 4, 11, 12, -1}
	SelectionSort(inArr)
	assert.EqualValues(t, []int{18, 12, 11, 4, 0, -1}, inArr)
}
