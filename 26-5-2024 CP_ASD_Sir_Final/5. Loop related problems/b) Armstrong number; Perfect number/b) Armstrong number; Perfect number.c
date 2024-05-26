/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:59:36
    File: b) Armstrong number; Perfect number.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*
        Explanation of Armstrong number: To check whether a number is an Armstrong number or not.

        It first checks if the number is less than 0, then it is not an Armstrong number.
        If the number is greater than or equal to 0, it will check if the sum of the cube of each digit of the number is equal to the number itself.
        If the sum of the cube of each digit of the number is equal to the number itself, then it is an Armstrong number.
        If the sum of the cube of each digit of the number is not equal to the number itself, then it is not an Armstrong number.

        Example:
        - If the number is 153, it will print "153 is an Armstrong number."
        - If the number is 370, it will print "370 is an Armstrong number."
        - If the number is 371, it will print "371 is an Armstrong number."
        - If the number is 407, it will print "407 is an Armstrong number."
        - If the number is 123, it will print "123 is not an Armstrong number."
    */

    int cp = n;  // Copying the number to another variable. For example, 153 is copied to cp.
    int cnt = 0; // Counting the number of digits in the number. For example, 153 has 3 digits.
    float sum = 0;

    while (n)
    {
        n /= 10;
        cnt++;
    }

    n = cp; // Resetting the value of n to the original number. For example, 153.

    while (cp) // Calculating the sum of the cube of each digit of the number. For example, 153 = 1^3 + 5^3 + 3^3.
    {
        int x = cp % 10;
        sum += pow(x, cnt);
        cp /= 10;
    }

    if (sum == n) // Checking if the sum of the cube of each digit of the number is equal to the number itself.
    {
        printf("%d is an Armstrong number.", n);
    }
    else
    {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}