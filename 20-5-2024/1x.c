// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int x, n;
//     float sum = 0;
//     scanf("%d%d", &x, &n);

//     for (int i = 0; i <= n; i++)
//     {
//         // sum += pow(x, i);
//         sum += (1 / pow(x, i));
//     }

//     printf("%.4f", sum);
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, i;
    double sum = 1, fact = 1;

    scanf("%d%d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        sum += (pow(x, i) / fact);
        fact *= (fact + 1);
    }

    printf("%.2lf\n", sum);
    return 0;
}