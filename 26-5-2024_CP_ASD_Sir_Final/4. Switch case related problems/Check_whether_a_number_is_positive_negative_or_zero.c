/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:09:12
    File: Check_whether_a_number_is_positive_negative_or_zero.c
*/

// C program to check whether a number is positive, negative or zero

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("%d is a positive number.\n", num);
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is a negative number.\n", num);
            break;
        case 0:
            printf("%d is zero.\n", num);
            break;
        }
        break;
    }
    return 0;
}