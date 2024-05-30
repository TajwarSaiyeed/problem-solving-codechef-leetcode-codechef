/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 19:37:52
    File: UpperToLower.c
*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("This is an uppercase character\n");
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("The uppercase character is: %c\n", ch);
    }
    else
        printf("Invalid character\n");

    /*
        Explanation:

        Let's say the input is 'a'. The ASCII value of 'a' is 97.
        The ASCII value of 'A' is 65.

        So, to convert 'a' to 'A', we need to subtract 32 from the ASCII value of 'a'.
        97 - 32 = 65, which is the ASCII value of 'A'.

        So, the output will be 'A'.
    */
    return 0;
}