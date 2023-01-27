// Add required imports
#include <stdio.h>

int main(int argc, char *argv[])
{
  // confirm that there are two command-line arguments
  if (argc == 2)
  {
    // extract the name of the program from command-line arguments
    // read the second command line argument which is a letter
    // always print a value in an non-bounded iteration construct
    while (1)
    {
      // make sure that the program output matches the README file
      printf("Run %s with %s \n", argv[0], argv[1]);
    }
  }
  else
  {
    printf("Please enter two command-line arguments, one being the file name.");
  }
}
