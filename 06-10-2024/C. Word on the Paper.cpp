#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string result = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char x;
                cin >> x;
                if (x != '.')
                    result += x;
            }
        }
        cout << result << endl;
    }
    return 0;
}