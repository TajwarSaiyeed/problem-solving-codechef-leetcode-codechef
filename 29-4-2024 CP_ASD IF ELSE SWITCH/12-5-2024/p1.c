#include <stdio.h>
#include <math.h>

int memo[100] = {0};

int fact(int n)
{

    if (memo[n] != 0)
        return memo[n];

    if (n == 0)
        return memo[n] = 1;

    return memo[n] = n * fact(n - 1);
}

int main()
{

    double x, sum = 0;
    int n;
    scanf("%lf%d", &x, &n);

    // // fact(n)

    // for (int i = 0; i <= n; ++i)
    // {
    //     sum += pow(x, i) / fact(i);
    // }

    int memo[100] = {0};

    for (int i = 0; i <= n; ++i)
    {
        if (memo[i] != 0)
            sum += memo[i];
        else
        {
            memo[i] = pow(x, i) / fact(i);
            sum += memo[i];
        }
    }

    printf("%lf", sum);
    return 0;
}