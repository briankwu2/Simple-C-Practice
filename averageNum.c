#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE * inputFile;
    char filePath[30]; // Defines a String with 29 chars

    // Reads user input 
    printf("Please enter the file path: ");
    scanf("%s", filePath); 

    // Validate the file was opened/found
    if(inputFile = fopen(filePath, "r")) {}
    else
    {
        printf("Error opening file, exiting...\n");
        return 1;
    }

    // Declare variables needed for reading file and parsing
    char string[100];
    int count = 0;
    long long total = 0;
    long number = 0;

    // Scans each decimal number until end of file
    while (fscanf(inputFile, "%ld", &number) != EOF)
    {
        total += number;
        count++;
    }

    // Calculates average
    long long avg = total / count;
    printf("The total of all the numbers is : %lld\n", total);
    printf("The amount of numbers was: %d\n", count);
    printf("The average of all the numbers is : %lld\n", avg);
    fclose(inputFile);
    return 0;
}

