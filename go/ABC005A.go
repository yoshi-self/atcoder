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

	var x, y int

	fmt.Fscan(r, &x, &y)

	fmt.Fprintln(w, y / x)
}
