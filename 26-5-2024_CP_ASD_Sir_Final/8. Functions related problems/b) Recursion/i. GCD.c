/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 20:21:55
    File: i. GCD.c
*/
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));

    // @ref : https://byjus.com/maths/greatest-common-divisor/

    /*
        Explanation:

        The gcd() function takes two integers a and b as arguments.

        The function calculates the GCD of the two numbers using the Euclidean algorithm.

        If b is 0, the GCD is a, and the function returns a.

        Otherwise, the function recursively calls itself with b and a % b as arguments.

        The main() function reads two integers a and b from the user.

        It then calls the gcd() function with a and b as arguments and prints the GCD of the two numbers.

        Example:
        Let's take a = 24 and b = 36.
        The GCD of 24 and 36 is 12.

        The output of the program will be:
        GCD of 24 and 36 is 12

        Example 2 :

        Let's take a = 6 and b = 9.
        The GCD of 6 and 9 is 3.

        The output of the program will be:
        GCD of 6 and 9 is 3
    */
    return 0;
}