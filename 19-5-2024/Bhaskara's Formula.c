#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double root1, root2, d;
    d = b * b - 4 * a * c;
    if (a == 0 || d < 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("R1 = %.5lf\n", root1);
    printf("R2 = %.5lf\n", root2);

    return 0;
}