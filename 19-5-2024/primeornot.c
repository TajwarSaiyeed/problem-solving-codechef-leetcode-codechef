#include <stdio.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Prime start from 2");
        return 0;
    }

    int breakBy = -1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            breakBy = i;
            break;
        }
    }

    if (flag == 1 && breakBy != n)
        printf("Not Prime");
    else
        printf("Prime");

    return 0;
}