package main

func main() {
	return
}

func isPowerOfTwo(x int) bool {
	return x && ((x & (x - 1)) == 0)
}
