/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:35:48
    File: pattern2.c
*/
#include<stdio.h>
int main()
{   int space = 0;
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < space; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
        space++;
    }

    /*
        *****
         ****
          ***
           **
            *   
    */
    return 0;
}