package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)
var wr = bufio.NewWriter(os.Stdout)

func init() {
	sc.Buffer([]byte{}, math.MaxInt64)
	sc.Split(bufio.ScanWords)
}

func main() {
	defer func() { wr.Flush() }()

	n := input()
	println(n)
}

func inputString() string {
	sc.Scan()
	return sc.Text()
}

func input() int64 {
	return atoi(inputString())
}

func inputTuple() (int64, int64) {
	return atoi(inputString()), atoi(inputString())
}

func inputFloat() float64 {
	return atof(inputString())
}

func println(x ...interface{}) {
	fmt.Fprintln(wr, x...)
}

func format(s string, x ...interface{}) {
	fmt.Fprintf(wr, s, x...)
}

func atoi(s string) int64 {
	i, e := strconv.ParseInt(s, 10, 64)
	if e != nil {
		panic(e)
	}
	return i
}

func atof(s string) float64 {
	f, _ := strconv.ParseFloat(s, 64)
	return f
}

func itoa(i int64) string {
	var s string
	fmt.Sprintf(s)
	return s
}
