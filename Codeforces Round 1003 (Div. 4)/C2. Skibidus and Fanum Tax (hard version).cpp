// C_1_Skibidus_and_Fanum_Tax_easy_version.cpp
/*
    Author: Tajwar Saiyeed
    Updated for C2. Skibidus and Fanum Tax (hard version)
*/
#include <bits/stdc++.h>
#define cin std::cin
#define cout std::cout
#define ll long long
#define vector std::vector
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    sort(b.begin(), b.end());

    ll prev = -1000000000000000000LL;
    bool possible = true;

    for (int i = 0; i < n; i++)
    {
        ll cand_no = (a[i] >= prev ? a[i] : 1000000000000000000LL);

        ll required = prev + a[i];
        ll cand_op = 1000000000000000000LL;
        auto it = lower_bound(b.begin(), b.end(), required);
        if (it != b.end())
            cand_op = *it - a[i];

        ll cur = min(cand_no, cand_op);
        if (cur < prev || cur == 1000000000000000000LL)
        {
            possible = false;
            break;
        }
        prev = cur;
    }

    cout << (possible ? "YES" : "NO") << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}

// Problem :