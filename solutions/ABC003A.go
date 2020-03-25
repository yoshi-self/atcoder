package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()

	var n float64

	fmt.Fscan(r, &n)

	fmt.Fprintln(w, int((1 + n) / 2 * 10000))
}
