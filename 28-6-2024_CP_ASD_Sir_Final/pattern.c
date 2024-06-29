/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:21:33
    File: pattern.c
*/
#include<stdio.h>
int main()
{
    int space = 3;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < space; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
        space--;
    }

    space = 1;
    for (int i = 3; i > 0; i--) {
        for (int j = 0; j < space; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
        space++;
    }

    /*

           * 
          * * 
         * * * 
        * * * * 
         * * * 
          * * 
           * 

    */

    return 0;
}