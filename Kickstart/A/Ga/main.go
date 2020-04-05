package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
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
	text = strings.TrimSuffix(text, "\n")
	t, _ := strconv.Atoi(text)
	for i := 0; i < t; i++ {
		text, _ = reader.ReadString('\n')
		x, _ := sliceAtoi(strings.Fields(text))
		b := x[1]
		text, _ = reader.ReadString('\n')
		y, _ := sliceAtoi(strings.Fields(text))
		sort.Ints(y)
		items, budget := 0, 0
		for _, item := range y {
			if budget+item <= b {
				items++
				budget += item
			} else {
				break
			}
		}
		fmt.Printf("Case #%d: %d\n", i+1, items)
	}
}
