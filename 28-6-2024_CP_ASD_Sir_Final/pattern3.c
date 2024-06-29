/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:41:05
    File: pattern3.c
*/
#include<stdio.h>
int main()
{
    int space = 3;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < space; j++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                printf("1 ");
            else
                printf("%d ", i);
        }          
        printf("\n");
        space--;
    }

    return 0;
}