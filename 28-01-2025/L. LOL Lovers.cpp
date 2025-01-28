/*
    Author: Tajwar Saiyeed
    Date: 2025-01-28 11:03:23
    File: L. LOL Lovers.cpp
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i < n; i++)
    {


        string left = s.substr(0, i);
        string right = s.substr(i);

        int llcount = count(left.begin(), left.end(), 'L');
        int lOcount = count(left.begin(), left.end(), 'O');
        int rlcount = count(right.begin(), right.end(), 'L');
        int rOcount = count(right.begin(), right.end(), 'O');

        if (llcount != rlcount and lOcount != rOcount)
        {
            cout << i << endl;
            return;
        }
    }

    cout << -1 << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

// Problem: codeforces