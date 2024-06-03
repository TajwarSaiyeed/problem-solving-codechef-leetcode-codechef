/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:50:49
    File: roots of a quadratic equation.c
*/

#include <stdio.h>
#include <math.h>

/**
 * Calculates the roots of a quadratic equation of the form ax^2 + bx + c = 0.
 * Prints the roots to the console.
 *
 * @ref https://www.pearson.com/content/dam/one-dot-com/one-dot-com/uk/documents/subjects/mathematics/Worksheets/Chapter2/Example-13-Chapter-2-The-discriminant-equal-roots.pdf
 */
int main()
{
    double a, b, c, discriminant, root1, root2;

    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant: b^2 - 4ac
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        // Calculate the real roots: (-b + sqrt(discriminant)) / (2a) and (-b - sqrt(discriminant)) / (2a)
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        // Calculate the real and equal roots: -b / (2a)
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else
    {
        // Calculate the complex roots: -b / (2a) ± sqrt(-discriminant) / (2a)i
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}