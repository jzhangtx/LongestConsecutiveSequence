package main

import "fmt"

func GetArrayFromInput(count int, prompt string) []int {
	if count == 0 {
		return []int{}
	}

	fmt.Print(prompt)

	v := make([]int, count)
	for i := 0; i < count; i++ {
		fmt.Scan(&v[i])
	}

	return v
}

func GetSmallest(A []int) int {
	if len(A) == 1 {
		return 0
	}

	index := 0

	for i := 1; i < len(A); i++ {
		if A[i] < A[index] {
			index = i
		}
	}

	return index
}

func LongestConsecutive(vec []int, index int) int {
	for i := 0; i < len(vec); i++ {
		if vec[i]-vec[index] == 1 {
			return 1 + LongestConsecutive(vec, i)
		}
	}

	return 0
}

func LongestConsecutiveSequence(A []int) int {
	index := GetSmallest(A)

	return 1 + LongestConsecutive(A, index)
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := GetArrayFromInput(count, "Please enter the array: ")

		fmt.Println("The longest consecutive sequence is ", LongestConsecutiveSequence(vec))
	}
}
