package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestRadixSort(t *testing.T) {
	inArr := []uint{0, 18, 4, 11, 12, 1}
	inArr = RadixSort(inArr)
	assert.EqualValues(t, []uint{0, 1, 4, 11, 12, 18}, inArr)

	inArr2 := []uint{0, 38, 5, 11, 23, 1, 101}
	inArr2 = RadixSort(inArr2)
	assert.EqualValues(t, []uint{0, 1, 5, 11, 23, 38, 101}, inArr2)
}
