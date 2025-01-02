#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> mp;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
    }

    string w;
    int mx = 0;

    for (auto &x : mp)
    {
        if (x.second > mx)
        {
            mx = x.second;
            w = x.first;
        }
    }

    cout << w << endl;

    return 0;
}
