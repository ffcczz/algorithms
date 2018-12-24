package sort

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestShellSort(t *testing.T) {
	inArr := []int{0, 18, 4, 11, 12, -1}
	ShellSort(inArr)
	assert.EqualValues(t, []int{-1, 0, 4, 11, 12, 18}, inArr)

	inArr2 := []int{891, 18, 19, -111, 0, 10}
	ShellSort(inArr2)
	assert.EqualValues(t, []int{-111, 0, 10, 18, 19, 891}, inArr2)
}
