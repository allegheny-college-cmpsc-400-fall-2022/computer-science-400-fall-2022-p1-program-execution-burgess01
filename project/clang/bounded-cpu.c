// Add required imports
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // check for three arguments:
  // 1: program name
  // 2: program input as a string
  // 3: number of iterations for the loop
  if (argc == 3)
  {
    // extract the three command-line arguments
    // iterate for a number of times driven
    // by the looping maximum bound given by user
    int num_of_iterations = atoi(argv[2]);
    for (int i = 1; i < (num_of_iterations + 1); i++)
    {
      // make sure that the program output matches the README file
      printf("Run %d of %s with %s \n", i, argv[0], argv[1]);
    }
  }
  else
  {
    printf("Please enter three command line arguments, one being the file name.");
  }
}
