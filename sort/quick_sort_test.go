package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestQuickSort(t *testing.T) {
	inArr := []int{0, 18, 4, 11, 12, -1}
	QuickSort(inArr)
	assert.EqualValues(t, []int{-1, 0, 4, 11, 12, 18}, inArr)
}
