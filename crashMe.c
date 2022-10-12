#include <stdio.h>
#include <stdlib.h>

// Function intended to try to overflow amount of allocated memory and crash the program.
void crashFunction (int * count)
{
    printf("The amount of calls is: %d\n", *count);
    *count += 1;
    crashFunction(count);

}

int main(int argc, char const *argv[])
{
    int * countPtr;
    int count = 0;
    countPtr = &count;
    crashFunction(countPtr); // Call the crashing function
    return 0;
}

/*
Results are that you will very shortly get a segmentation fault which means that
you have intruded into a memory area where the user is not allowed and therefore crashes the program.
What happens is that the stack gets overflowed by the amount of local variables within the function and
therefore intrudes outside of the allowed stack area.
For my local machine, around 261,000 is the mark of calls where it crashes.
*/