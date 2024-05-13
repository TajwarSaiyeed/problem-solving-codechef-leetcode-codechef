#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0;
    for (int i = 1;; i++)
    {
        if (i % 7 != 0)
            sum += pow(3, i);
        else
            break;
    }

    printf("%d", sum);
    return 0;
}