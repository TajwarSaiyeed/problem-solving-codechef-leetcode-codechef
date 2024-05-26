#include <stdio.h>
#include <stdlib.h> // Include the <stdlib.h> header for the abs() function

/**
 * This program calculates the quotient of two numbers using bitwise operations.
 * It takes two numbers as input from the user and performs the division
 * using bitwise XOR operation.
 */

int main()
{
    int dividend, divisor;
    scanf("%d %d", &dividend, &divisor);

    /*
        @Explanation:
        Let's say dividend = 10 and divisor = 3

        dividend = 1010 (binary)
        divisor = 0011 (binary)

        quotient = 0 (initially)

        1st iteration:
        dividend >= divisor (1010 >= 0011)

        dividend = dividend ^ divisor = 1010 ^ 0011 = 1001 (9 in decimal)
        quotient = quotient ^ 1 = 0000 ^ 0001 = 0001 (1 in decimal)

        2nd iteration:
        dividend >= divisor (1001 >= 0011)

        dividend = dividend ^ divisor = 1001 ^ 0011 = 1010 (10 in decimal)
        quotient = quotient ^ 1 = 0001 ^ 0001 = 0000 (0 in decimal)

        3rd iteration:
        dividend >= divisor (1010 >= 0011)

        dividend = dividend ^ divisor = 1010 ^ 0011 = 1001 (9 in decimal)
        quotient = quotient ^ 1 = 0000 ^ 0001 = 0001 (1 in decimal)

    */

    // Check for division by zero
    if (divisor == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }

    int quotient = 0;
    int sign = 1;

    // Determine the sign of the quotient
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        sign = -1;
    }

    // Convert both dividend and divisor to positive numbers
    dividend = abs(dividend);
    divisor = abs(divisor);

    // Perform division using XOR operator
    while (dividend >> 1 >= divisor)
    {
        dividend = dividend ^ divisor;
        quotient = quotient ^ 1;
    }

    // Apply the sign to the quotient
    quotient = quotient * sign;

    printf("Quotient: %d\n", quotient);

    return 0;
}
