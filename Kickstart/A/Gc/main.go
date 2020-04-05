package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func sliceAtoi(strArr []string) ([]int, error) {
	var str string
	var i int
	var err error

	iArr := make([]int, 0, len(strArr))
	for _, str = range strArr {
		i, err = strconv.Atoi(str)
		if err != nil {
			return nil, err
		}
		iArr = append(iArr, i)
	}
	return iArr, nil
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	text, _ := reader.ReadString('\n')
	x, _ := sliceAtoi(strings.Fields(text))
	m, n, r := x[0], x[1], x[2]
	values := [][]string{}
	for i := 0; i < m; i++ {
		text, _ = reader.ReadString('\n')
		row := strings.Fields(text)
		values = append(values, row)
	}
	rotateMatrix(values, r, m, n)
	for _, ro := range values {
		fmt.Println(strings.Join(ro, " "))
	}
}

func rotateMatrix(values [][]string, r int, m int, n int) [][]string {

	return values
}
