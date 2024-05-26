/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:51:34
    File: b) Check whether a number is positive, negative or zero.c
*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    /*
        Explanation of Switch Statement : To check whether a number is positive, negative, or zero.

        It first checks if the number is positive, then negative, and finally zero.

        Example:
        - If the number is 5, it will print "5 is a positive number."
        - If the number is -5, it will print "-5 is a negative number."
        - If the number is 0, it will print "0 is zero."
    */

    switch (num > 0)
    {
    case 1:
        printf("%d is a positive number.", num);
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is a negative number.", num);
            break;
        case 0:
            printf("%d is zero.", num);
            break;
        }
        break;
    }
    return 0;
}