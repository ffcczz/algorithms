package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestCountSort(t *testing.T) {
	inArr := []uint{0, 18, 4, 11, 12, 1}
	inArr = CountSort(inArr)
	assert.EqualValues(t, []uint{0, 1, 4, 11, 12, 18}, inArr)

	inArr2 := []uint{0, 10, 7, 111, 33, 128, 65}
	inArr2 = CountSort(inArr2)
	assert.EqualValues(t, []uint{0, 7, 10, 33, 65, 111, 128}, inArr2)
}
