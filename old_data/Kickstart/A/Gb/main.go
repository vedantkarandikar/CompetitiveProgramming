package main

import (
	"bufio"
	"fmt"
	"math"
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

func findD(a []int) []int {
	x := []int{}
	for i := 0; i < len(a)-1; i++ {
		y := int(math.Abs(float64(a[i] - a[i+1])))
		if y > 1 {
			x = append(x, y)
		}
	}
	sort.Sort(sort.Reverse(sort.IntSlice(x)))
	return x
}

func main() {
	maxD := 1
	reader := bufio.NewReader(os.Stdin)
	text, _ := reader.ReadString('\n')
	text = strings.TrimSuffix(text, "\n")
	t, _ := strconv.Atoi(text)
	for i := 0; i < t; i++ {
		text, _ = reader.ReadString('\n')
		x, _ := sliceAtoi(strings.Fields(text))
		k := x[1]
		text, _ = reader.ReadString('\n')
		y, _ := sliceAtoi(strings.Fields(text))
		d := findD(y)
		for j := 0; j < k && len(d) > 0; j++ {
			temp := d[0]
			d = d[1:]
			if temp&1 == 0 {
				d = append(d, temp/2, temp/2)
			} else {
				d = append(d, 1+temp/2, temp/2)
			}
			sort.Sort(sort.Reverse(sort.IntSlice(d)))
			maxD = d[0]
		}
		fmt.Printf("Case #%d: %d\n", i+1, maxD)
	}
}
