package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestInsertionSort(t *testing.T) {
	inArr := []int{0, 18, 4, 11, 12, -1}
	InsertionSort(inArr)
	assert.EqualValues(t, []int{-1, 0, 4, 11, 12, 18}, inArr)
}
