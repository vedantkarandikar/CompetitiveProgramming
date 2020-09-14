package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func max(nums ...int) int {
	max := 0
	for _, num := range nums {
		if num > max {
			max = num
		}
	}
	return max
}

func sliceAtoi(strArr []string) []int {
	var str string
	var i int
	var err error

	iArr := make([]int, 0, len(strArr))
	for _, str = range strArr {
		i, err = strconv.Atoi(str)
		if err != nil {
			return nil
		}
		iArr = append(iArr, i)
	}
	return iArr
}

func findMaxArraySum(x []int) int {
	n := len(x)
	dp := make([]int, n)
	dp[0] = max(0, x[0])
	dp[1] = max(x[1], x[0])
	for i := 2; i < len(x); i++ {
		dp[i] = max(dp[i-2], max(dp[i-1], dp[i-2]+x[i]))
	}
	return max(dp[n-1], dp[n-2])
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	_, err := reader.ReadString('\n')
	if err != nil {
		panic(err)
	}
	y, err := reader.ReadString('\n')
	if err != nil {
		panic(err)
	}
	x := strings.Fields(y)
	if err != nil {
		panic(err)
	}
	fmt.Println(findMaxArraySum(sliceAtoi(x)))
}
