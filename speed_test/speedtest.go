package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
	"time"
)

// スキャナを作成
var sc = bufio.NewScanner(os.Stdin)

func main() {
	sc.Split(bufio.ScanWords) // split by word
	N,_ := scanInt(),scanInt()
	var start, end  time.Time

	A_list := make([]int, N)        



	start = time.Now()
	for i := 0; i < N; i++ {
		A_list[i] = scanInt()
	}
	end = time.Now()

	fmt.Printf("%f秒\n", (end.Sub(start)).Seconds())
}

// scanInt scans int type.
func scanInt() (i int) {
	var err error
	sc.Scan()
	i, err = strconv.Atoi(sc.Text()) // int型にparse
	if err != nil {
		log.Fatal("Failed to input", err)
	}
	return
}