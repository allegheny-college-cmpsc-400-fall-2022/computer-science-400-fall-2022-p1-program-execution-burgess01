// Add required imports
#include <stdio.h>

int main(int argc, char *argv[])
{
  // check for three arguments:
  // 1: program name
  // 2: program input as a string
  // 3: number of iterations for the loop
  if (argc == 3)
  {
    // extract the three command-line arguments
    char program_name[] = argv[0];
    char user_input[] = argv[1];
    int iterations = argv[2];

    // iterate for a number of times driven
    // by the looping maximum bound given by user
    for (int i = 1; i < iterations; i++)
    {
      // make sure that the program output matches the README file
      println("Run %s with %s \n", program_name, user_input);
    }
  }
  else
  {
    println("Please enter three command line arguments, one being the file name.");
  }
}
