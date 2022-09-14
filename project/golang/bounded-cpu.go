package main

// import the required packages
import "fmt"
import "os"
import "time"

func main(value, num) {
	// extract the command-line arguments
	var prog_name = os.Args[0]
	var entered_value = os.Args[1]
	var num_of_runs = os.Args[2]
	// convert the command-line argument(s) as needed
	// iterate through the required runs of the program
	for i := 1; i < num_of_runs; i++ {
		// make sure that the program output matches the README file
		time.Sleep(1*time.Second)
		fmt.Println("Run ", i, " of", prog_name, " with ", entered_value)
	}
}
