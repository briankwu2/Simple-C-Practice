/* Author: Brian Wu
For class CE4370 - Embedded Systems Homework 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Based on the order of the characters, we can deduce big endianness (Normal left-to-right ordering) or little endianness (right to left ordered)
of any machine.
*/
int main(int argc, char const *argv[])
{

    char * str; // Define some pointer

    // Allocate 6 bytes of memory for some string "hello" which includes the null operator at the end.
    str = (char *) malloc(6);
    strcpy(str, "hello"); // Copy into the string, "hello"
    printf("String = %s, Address = %#x\n", str, str); // Outputs the current address and string

    for (int i = 0; i < 6; i++)
    {
       printf("Address = %#x, Character = %c\n", &str[i], str[i]); // Print out each character and the address associated with it
    }

    free(str); // Free the allocated memory

    return 0;
}
