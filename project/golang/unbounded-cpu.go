package main

// import the required packages
import "fmt"
import "os"
import "time"

func main() {
	// declare a done variable that is a boolean
	var done bool
	// indicate that the program is not done running
	done = false
	// extract the command-line argument(s)
	var prog_name = os.Args[0]
	var entered_value = os.Args[1]
	// always iterate in an unbounded-fashion
	for !done{
		// TODO: make sure that the program output matches the README file
		time.Sleep(1*time.Second)
		fmt.Println("Run", prog_name, "with", entered_value)
	}
}
