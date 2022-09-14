# Program Execution

## Katie Burgess

## Program Output

### What is the output from running the following commands?

Use a fenced code block to provide the output for this command.
Make sure that the fenced code block designates the content as text.

- `./bin/bounded-cpu ✨ 10` in the `clang/` directory

```
Run 1 of ./bin/bounded-cpu with ✨ 
Run 2 of ./bin/bounded-cpu with ✨ 
Run 3 of ./bin/bounded-cpu with ✨ 
Run 4 of ./bin/bounded-cpu with ✨ 
Run 5 of ./bin/bounded-cpu with ✨ 
Run 6 of ./bin/bounded-cpu with ✨ 
Run 7 of ./bin/bounded-cpu with ✨ 
Run 8 of ./bin/bounded-cpu with ✨ 
Run 9 of ./bin/bounded-cpu with ✨ 
Run 10 of ./bin/bounded-cpu with ✨ 
```

Use a fenced code block to provide the output for this command.
Make sure that the fenced code block designates the content as text.

- `./bin/bounded-cpu ✨ 10` in the `clang/` directory

```
Run 1 of ./bin/bounded-cpu with ✨ 
Run 2 of ./bin/bounded-cpu with ✨ 
Run 3 of ./bin/bounded-cpu with ✨ 
Run 4 of ./bin/bounded-cpu with ✨ 
Run 5 of ./bin/bounded-cpu with ✨ 
Run 6 of ./bin/bounded-cpu with ✨ 
Run 7 of ./bin/bounded-cpu with ✨ 
Run 8 of ./bin/bounded-cpu with ✨ 
Run 9 of ./bin/bounded-cpu with ✨ 
Run 10 of ./bin/bounded-cpu with ✨ 
```

## Source Code and Configuration Files

### Describe in detail how the program source code works

#### The `char *argv[]` variable in the `bounded-cpu.c` program

The char *argv[] variable in the parameters of the main function of bounded-cpu.c takes in all of the command line input that the user puts in when trying to run the program. This includes everything, such as the program name as well as the entered iteration value and character that you want to put (such as A or the sparkles emoji).

#### The `os.Args[]` variable in the `bounded-cpu.go` program

os.Args[] is used in bounded-cpu.go in order to grab a specific command line argument that the user inputs. For example, it is used in this program in order to grab both the number of iterations and the character or emoji that you want to see on every iteration.

#### The `printf` function in the `bounded-cpu.c` program

The printf function is used in bounded-cpu.c in order to print output to the terminal. For example, we use it to print the number of iterations we indicate in the command line.

#### The `fmt.Println` function in the `bounded-cpu.go` program

fmt.Println is the Golang equivalent of printf in C. We use this function in order to print output to the terminal, specifically to print the number of iterations we specify in the command line.

### What are the similarities and differences between the C and Go programming languages?

C feels a lot 'lower' of a language, due to the fact that it required items like pointers and more manual memory allocation than Go uses. Despite this, they do have a lot of similarities, likely due to the fact that they both are OOP languages. They have very similar ways of grabbing command line input as well, the formatting of their for loops, and printing things to the terminal. They both require variable types to be written out, a difference they share from Python. These skills were very prominent in this lab, leading to these similarities standing out to me during this lab. 

## Project Reflection

### How do the programs that you implemented connect to the content in the Systems Introduction module?

The programs that I implemented connect to the content in the Systems Introduction module because we talked about topics such as the process through which programs run and the idea of virtualization. The whole time these programs are running, they are fetching instructions, decoding them, and executing them. These programs also demonstrate ideas of virtualization, such as the hardware resources that the program uses when it runs. An example of this ties into how the programs run, as it needs the CPU to fetch instructions, the Memory to determine what the instruction should do, and the Disk to keep the program information stored in the file system even if the computer crashes or turns off.

### What was the greatest challenge that you faced when completing this project?

My greatest challenge was figuring out how to do a for loop in Go. The fact that I had to type cast all of the variables was something I didn't catch on to at first, and so I had to research exactly how to do that. After that, I had to find out how to change the string type command line input into a int, and then how to work in err in order to get rid of errors related to not using that required variable. All in all, there were a lot of steps and a lot of things I had to understand in order to get to the point where I could implement a for loop in Golang.

### Based on your experiences with this project, what is one way you can improve your technical skills?

Based on my experiences with this project, one way I would improve my technical skills would be to improve my skills with C and Golang. I would do this by brushing up on my C skills by reviewing some of my labs from last year's 200 class, as well as watching online tutorials in both Golang, as this is my first time being exposed to it, as well as C. Spending more time researching before jumping into coding is another skill I want to improve on, as it would help me better plan out what I have to do before trying to just slap something together.
