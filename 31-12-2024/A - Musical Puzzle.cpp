#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, m;
        cin >> n;
        cin >> s;
        set<string> ss;
        for (int i = 0; i < n - 1; i++)
        {
            m = s[i];
            m += s[i + 1];
            ss.insert(m);
        }
        cout << ss.size() << endl;
    }
    return 0;
}