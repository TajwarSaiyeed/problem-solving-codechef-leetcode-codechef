/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 19:40:14
    File: LowerToUpper.c
*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("This is a lowercase character\n");
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("The lowercase character is: %c\n", ch);
    }
    else
        printf("Invalid character\n");

    /*
        Explanation:

        Let's say the input is 'A'. The ASCII value of 'A' is 65.
        The ASCII value of 'a' is 97.

        So, to convert 'A' to 'a', we need to add 32 to the ASCII value of 'A'.
        65 + 32 = 97, which is the ASCII value of 'a'.

        So, the output will be 'a'.
    */
    return 0;
}