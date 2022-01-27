package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	no_of_lines, _ := strconv.Atoi(scanner.Text())
	for i := 0; i < no_of_lines; i++ {
		scanner.Scan()
		if i%2 == 1 {
			continue
		}
		fmt.Println(scanner.Text())
	}
}
