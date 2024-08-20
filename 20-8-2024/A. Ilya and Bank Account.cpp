/*
    Author: Tajwar Saiyeed
    Date: 2024-08-20 10:59:11
    File: A. Ilya and Bank Account.cpp
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
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

void solve()
{
    /*
        First attempt

        string n;
        cin >> n;
        int num = stoi(n);
        if (num > 0)
        {
            cout << n << nl;
        }
        else
        {
            int num = stoi(n);
            int first = num % 10;
            int second = num / 10 % 10;
            if (abs(num) < 100 and abs(num) % 10 == 0)
            {
                cout << 0 << nl;
            }
            else if (abs(first) > abs(second))
            {
                cout << n.substr(0, n.size() - 1) << nl;
            }
            else
            {
                cout << n.substr(0, n.size() - 2) + n[n.size() - 1] << nl;
            }
        }
    */

    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
        return;
    }
    string s = to_string(n);
    string s1 = s.substr(0, s.size() - 1);
    string s2 = s.substr(0, s.size() - 2) + s[s.size() - 1];
    cout << max(stoi(s1), stoi(s2)) << endl;
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