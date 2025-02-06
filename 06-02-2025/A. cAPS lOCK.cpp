/*
    Author: Tajwar Saiyeed
    Date: 2025-02-06 21:39:32
    File: A. cAPS lOCK.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            cnt++;
    }
    if (cnt == n || (cnt == n - 1 && islower(s[0])))
    {
        for (int i = 0; i < n; i++)
        {
            if (isupper(s[i]))
                cout << (char)tolower(s[i]);
            else
                cout << (char)toupper(s[i]);
        }
    }
    else
    {
        cout << s;
    }
    cout << nl;
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


// Problem : 