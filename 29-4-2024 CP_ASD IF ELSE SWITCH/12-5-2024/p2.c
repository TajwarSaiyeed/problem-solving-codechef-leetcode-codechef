#include <stdio.h>
#include<math.h>
int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += pow(x, i);
        else
            sum -= pow(x, i);
    }

    printf("%d\n", sum);
    return 0;
}