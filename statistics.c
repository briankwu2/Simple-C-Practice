#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    double variance = 0;
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
        variance += (number - avg) * (number - avg);
    }
    
    variance = variance / count;

    double standDev = sqrt(variance);
    

    printf("The minimum number in the list is: %d\n", min);
    printf("The maximum number in the list is: %d\n", max);
    printf("The variance is: %f\n", variance );
    printf("The standard deviation is: %f\n", standDev);

    return 0;
}

