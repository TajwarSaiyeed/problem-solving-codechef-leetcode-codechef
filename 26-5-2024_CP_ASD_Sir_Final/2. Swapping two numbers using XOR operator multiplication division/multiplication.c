/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:50:14
    File: multiplication.c
*/

#include <stdio.h>

/**
 * This program calculates the product of two numbers using bitwise operations.
 *
 * It takes two numbers as input from the user and performs the multiplication
 *
 * using bitwise XOR and shift operations.
 */

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int product = 0;

    while (num2 != 0)
    {

        /*
            If yes, add num1 to the product using bitwise XOR

            Explanation:
            Let's say num1 = 5 and num2 = 3

            num1 = 101 (binary)
            num2 = 011 (binary)

            product = 0 (initially)

            1st iteration:
            num2 & 1 = 011 & 001 = 001 (odd number)
            product = product ^ num1 = 000 ^ 101 = 101 (5 in decimal)
            num1 = num1 << 1 = 101 << 1 = 1010 (10 in decimal)
            num2 = num2 >> 1 = 011 >> 1 = 001 (1 in decimal)

            2nd iteration:
            num2 & 1 = 001 & 001 = 001 (odd number)
            product = product ^ num1 = 101 ^ 1010 = 1111 (15 in decimal)
            num1 = num1 << 1 = 1010 << 1 = 10100 (20 in decimal)
            num2 = num2 >> 1 = 001 >> 1 = 000 (0 in decimal)


            Loop ends as num2 becomes 0

        */

        // Check if the least significant bit of num2 is 1
        if (num2 & 1)
        {
            product = product ^ num1;
        }

        // Left shift num1 by 1 to multiply it by 2
        num1 = num1 << 1;

        // Right shift num2 by 1 to divide it by 2
        num2 = num2 >> 1;
    }

    printf("Product: %d\n", product);

    return 0;
}