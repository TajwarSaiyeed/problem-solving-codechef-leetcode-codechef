/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 20:19:01
    File: a) Swapping two numbers using function.c
*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    /*
        Explanation:

        The swap() function takes two integer pointers as arguments.

        The function swaps the values of the two integers using a temporary variable.

        temp = *a; copies the value of a to temp.

        *a = *b; copies the value of b to a.

        *b = temp; copies the value of temp to b.

        Then the values of a and b are printed before and after the swap.

        Example:

        Let's take a = 5 and b = 10.

        The output of the program will be:

        a = 5, b = 10
        a = 10, b = 5
    */

    return 0;
}