/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:53:55
    File: pattern4.c
*/
#include<stdio.h>
int main()
{
    char alp[5] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", alp[j]);
        }          
        printf("\n");
    }
    return 0;
}