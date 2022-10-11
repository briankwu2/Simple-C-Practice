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
    int min, max = 0;

    // Scans each decimal number until end of file
    while (fscanf(inputFile, "%ld", &number) != EOF)
    {
        if (number < min) {min = number;} // Saves the minimum number
        else if (number > max) {max = number;} // Saves the max number


        total += number;
        count++;
    }
    fclose(inputFile);

    long standDev = 0;
    // Calculates average
    int avg = total / count;

    // Validate the file was opened/found
    if(inputFile = fopen(filePath, "r")) {}
    else
    {
        printf("Error opening file, exiting...\n");
        return 1;

    }
    // Re-loops through the file to calculate variance
    while(fscanf(inputFile, "%ld", &number) != EOF)
    {
        standDev += (number - avg) * (number - avg);
    }
    

    printf("The minimum number in the list is: %d\n", min);
    printf("The maximum number in the list is: %d\n", max);

    return 0;
}

