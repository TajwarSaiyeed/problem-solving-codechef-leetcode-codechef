#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int cmp1 = a1 + a2;
        int cmp2 = a4 - a2;
        int cmp3 = a5 - a4;

        if (cmp1 == cmp2 and cmp2 == cmp3)
        {
            cout << 3 << endl;
        }
        else if (a1 + a2 == cmp2 or a1 + a2 == cmp3 or cmp2 == cmp3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}