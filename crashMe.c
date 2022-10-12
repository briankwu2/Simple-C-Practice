#include <stdlib.h>

// Function intended to try to overflow amount of allocated memory and crash the program.
void crashFunction ()
{
    long double * bigNumber;
    bigNumber = (long double *) malloc(10000000); // Allocates a lot of memory
    crashFunction();

}

int main(int argc, char const *argv[])
{
    crashFunction(); // Call the crashing function
    return 0;
}

/*
Results are that you will very shortly get a segmentation fault which means that
you have intruded into a memory area where the user is not allowed and therefore crashes the program

*/