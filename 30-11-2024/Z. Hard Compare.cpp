#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
typedef long long ll;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c && b == d)
    {
        no;
        return;
    }

    double log_ab = b * log(a);
    double log_cd = d * log(c);

    if (log_ab > log_cd)
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}