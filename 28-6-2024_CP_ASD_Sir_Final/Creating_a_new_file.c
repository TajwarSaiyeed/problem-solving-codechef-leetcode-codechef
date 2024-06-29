/*
    Author: Tajwar Saiyeed
    Date: 2024-06-30 05:12:38
    File: Creating a new file.c
*/
#include <stdio.h>

int main()
{
    FILE *fptr;
    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");
    // Write some text to the file
    fprintf(fptr, "This is a text file created using C programming.\n");
    fprintf(fptr, "Author: Tajwar Saiyeed\n");
    fprintf(fptr, "Date: 2024-06-30 05:12:38\n");
    fprintf(fptr, "File: Creating a new file.c\n");
    // Close the file
    fclose(fptr);

    FILE *fptr2;
    // Open the file in reading mode
    fptr2 = fopen("filename.txt", "r");
    // Read and display the contents of the file and store it in a character array
    char ch;
    while ((ch = fgetc(fptr2)) != EOF)
    {
        printf("%c", ch);
    }
    // Close the file
    fclose(fptr2);

    return 0;
}