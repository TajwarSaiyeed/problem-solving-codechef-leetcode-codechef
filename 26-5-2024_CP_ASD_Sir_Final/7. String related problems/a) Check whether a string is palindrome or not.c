/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 00:34:25
    File: a) Check whether a string is palindrome or not.c
*/
#include <stdio.h>
int main()
{
    char *str = malloc(100 * sizeof(char));
    scanf("%s", str);

    int len = strlen(str);
    int flag = 1;

    int l = 0, r = len - 1;
    while (l < r)
    {
        if (str[l] != str[r])
        {
            flag = 0;
            break;
        }
        l++;
        r--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    /*

        What is Palindrome?
        A palindrome is a word, number, phrase, or other sequence of characters that reads the same forward and backward.



        Explanation:
        Initially, i have taken a string as input. @str

        Then, i have calculated the length of the string. @len

        Then, i have checked whether the string is palindrome or not. @str[i] != str[len - i - 1]

        Finally, i have printed the result.

        Time Complexity: O(n)

        @example
        str = "madam" => "madam" is a palindrome
        because if we reverse the string, it will be the same.

        str = "tajwar" => "tajwar" is not a palindrome
        because if we reverse the string, it will not be the same.


    */

    return 0;
}