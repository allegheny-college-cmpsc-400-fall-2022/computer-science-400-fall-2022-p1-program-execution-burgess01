# Program Execution

[![build](../../actions/workflows/build.yml/badge.svg)](../../actions/)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://gcc.gnu.org/)
[![Language: Go](https://img.shields.io/badge/Language-Go-blue.svg)](https://go.dev/)
[![Commits: Conventional](https://img.shields.io/badge/Commits-Conventional-blue.svg)](https://www.conventionalcommits.org/en/v1.0.0/)
[![Discord](https://img.shields.io/discord/1013818801281839184?logo=discord)](https://discord.gg/9VfCdqffu6)

## Introduction

This project introduces the steps that you must take to implement, build, and
run programs in the C and Go programming languages. You will learn how to use
Makefiles to automatically build programs and copy their binaries to a suitable
directory. The programs that you implement will demonstrate the execution of
iteration constructs and the extraction of command-line arguments.

## Seeking Assistance

Even though the course instructor will have covered all of the concepts central
to this project before you start to work on it, please note that not every
detail needed to successfully complete the assignment will have been covered
during prior classroom sessions. This is by design as an important skill that
you must practice as you explore the depth and breadth in the field of operating
systems. If you have questions about this project, please schedule a meeting
with the course instructor during office hours.

## Project Overview

After cloning this repository to your computer, please take the following
steps:

### Program Setup

Some of the source code for this project is extracted from the
[Introduction](http://pages.cs.wisc.edu/~remzi/OSTEP/intro.pdf) in the OSTEP
book. Please make sure that you refer to this chapter and to the slides on the
course web site for more information about these programs!

- Make sure that you have installed the following programs on your laptop:
  - Gcc toolchain
  - Go programming language
  - C programming language
- Use the `cd` command to change into the directory for this repository.
- Review the `Makefile` in the `project/clang/` directory to see the targets for
  the version of this project implemented in the C programming language.
- Review the `Makefile` in the `project/golang/` directory to see the targets
  for the version of this project implemented in the Go programming language .
- Both of these `Makefile`s will work on the Linux and MacOS operating systems
  and, additionally, on GitHub Actions and inside of the OS-Sketch Docker
  container. You may need to revise portions of these `Makefile`s so that they
  work correctly on the Windows operating system.
- To build the C and Go programs you need to run the following commands from the
  respective `clang/` and `golang/` directories:
  - `make unbounded-cpu` to build the `bin/unbounded-cpu` binary
  - `make bounded-cpu` to build the `bin/bounded-cpu` binary
- Note that the `make` commands are the same regardless of whether you are in
  the `clang/` or the `golang/` directories! With that said, it is important to
  note that the `Makefile` in `golang/` does something different than the one in
  `clang`. Make sure that you understand how these `Makefile`s work!

### Program Use

This project invites you to implement the `unbounded-cpu` and `bounded-cpu`
programs in both the C and Go programming languages. The remainder of this
sub-sub-section offers some insights into how to use these programs, while the
next sub-sub-section overviews the steps that you will need to take to implement
these programs. Ultimately, the completed version of your C and Go programs
should produce the expected output on both your laptop and in GitHub Actions.

Both the C and Go implementations of the `./bin/unbounded-cpu` program will
continue to run until you interrupt their execution by typing `Ctrl-C`. You can
run the version of this program implemented in the C programming language by
typing the command `./bin/unbounded-cpu A` in your terminal from the `clang/`
directory. Alternatively, you can run the Go version of this program typing the
command `./bin/unbounded-cpu A` in your terminal from the `golang/` directory.
Don't forget that this program will not stop executing until you force it to do
so by typing `Ctrl-C`!

Both the C and Go implementations of the `./bin/bounded-cpu` program will run
for a fixed number of iterations. You can run the C version of this program by
typing the command `./bin/bounded-cpu A 2` in your terminal from the `clang/`
directory. Alternatively, you can run the Go version of this program typing
the command `./bin/bounded-cpu A 2` in your terminal from the `golang/`
directory.

### Program Implementation

You should enhance the `cpu.c` program provided in the OSTEP textbook so that it
produces the following output. Please note that this file should be called
`unbounded-cpu.c` because it runs for an unbounded number of times before you
press the `Ctrl-C` key combination. It is also important to note that the
`unbounded-cpu.c` program should use a non-hard-coded approach to extract the
name of the executed binary and then display it to the terminal. Finally, the
`unbounded-cpu.go` program should adopt the same requirements and produce the
same output as the version that you implement in the C programming language!

```
$ ./bin/unbounded-cpu A
Run ./bin/unbounded-cpu with A
Run ./bin/unbounded-cpu with A
Run ./bin/unbounded-cpu with A
^C
```

You should also implement a `bounded-cpu.c` file that accepts an additional
command-line argument that defines the number of times for which is should
output its name and the parameter for which it should execute. The program
should also output the specific run count as it executes for the required number
of times. As for the previous program, the implementations in C and Go should
produce the same output, which should look like the following. Note that when
the `bounded-cpu` program is run with the input of `3` it should produce three
separate lines of output and have the numbers `1`, `2`, and `3` appear in the
output. Moreover, since the run count starts at `1`, a number like `0` should
not appear in the program's output to designate the first run!

```
$ ./bin/bounded-cpu A 3
Run 1 of ./bin/bounded-cpu with A
Run 2 of ./bin/bounded-cpu with A
Run 3 of ./bin/bounded-cpu with A
```

### Project Reflection

As you work on this project, you should regularly take time to reflect on the
steps that you are taking and why you are taking them. Each time you run a
program you should think about the inputs, outputs, and behavior of that
program, jotting down notes to help you remember these insights. When you are
writing C and Go programs, please reserve time to reflect on the features of the
language that you are learning and how the languages are similar to and
different from each other. Finally, as you complete this project, make sure that
you reflect on your own strengths and weaknesses and how you can improve in
advance of the next project.

### Automated Assessment

Please review the following notes about the way in which your project will be
automatically assess in GitHub Actions:

- If you have already installed the
  [GatorGrade](https://github.com/GatorEducator/gatorgrade) program that runs
  the automated grading checks provided by
  [GatorGrader](https://github.com/GatorEducator/gatorgrader) you can, from the
  repository's base directory, run the automated grading checks by typing
  `gatorgrade --config config/gatorgrade.yml`.
- You may also review the output from running GatorGrader in GitHub Actions.
- Don't forget to provide all of the required responses to the technical writing
  prompts in the `writing/reflection.md` file.
- Please make sure that you completely delete the `TODO` markers and their
  labels from all of the provided source code. This means that instead of only
  deleting the `TODO` marker from the code you should delete the `TODO`
  marker and the entire prompt and then add your own comments to demonstrate
  that you understand all of the source code in this project.
- Please make sure that you also completely delete the `TODO` markers and their
  labels from every line of the `writing/reflection.md` file. This means that
  you should not simply delete the `TODO` marker but instead delete the entire
  prompt so that your reflection is a document that contains polished technical
  writing that is suitable for publication on your professional web site.
