package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func readInt() int {
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	if err != nil {
		panic(err)
	}
	n, err := strconv.Atoi(strings.TrimSpace(input))
	if err != nil {
		panic(err)
	}
	return n
}

func readString() string {
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	if err != nil {
		panic(err)
	}
	return strings.TrimSpace(input)
}

func possible(a, b string) bool {
	if len(a) < len(b) {
		return false
	}
	if a[0] == b[0] || b[0]-a[0] == 32 {
		possible(a[1:], b[1:])
		return true
	}
	if a[0] < 91 {
		return false
	}
	return true
}

func main() {
	q := readInt()
	for i := 0; i < q; i++ {
		if possible(readString(), readString()) {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
