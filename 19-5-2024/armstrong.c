#include <stdio.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);
    int cp = n;
    int cnt = 0;
    float sum = 0;
    while (n)
    {
        n /= 10;
        cnt++;
    }

    while (cp)
    {
        int x = cp % 10;
        sum += pow(x, cnt);
        cp /= 10;
    }

    printf("%d %f", cnt, sum);

    return 0;
}