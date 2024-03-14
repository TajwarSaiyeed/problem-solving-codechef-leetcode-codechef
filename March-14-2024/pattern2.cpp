#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (i <= j)
                continue;
            cout << ++j << " " << i++ << endl;
        }
    }
    return 0;
}