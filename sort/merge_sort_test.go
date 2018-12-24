package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestMergeSort(t *testing.T) {
	inArr := []int{0, 18, 4, 11, 12, -1}
	inArr = MergeSort(inArr)
	assert.EqualValues(t, []int{-1, 0, 4, 11, 12, 18}, inArr)
}
