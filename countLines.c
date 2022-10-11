#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE * inputFile;
    printf("Please enter the file path: ");
    char filePath[30]; // Defines a String with 29 chars
    scanf("%s", filePath); // Reads user input

    // Validate the file was opened/found
    if(inputFile = fopen(filePath, "r")) {}
    else
    {
        printf("Error opening file, exiting...\n");
        return 1;
    }

    char dummy[100];
    int count = 0;

    // Reads all the lines of the file
    while (fgets(dummy, sizeof(dummy),inputFile))
    {
        // printf("%s", dummy);
        count++;
    }

    printf("The number of lines is: %i\n", count);
    fclose(inputFile);
    return 0;
}

