/*
    Author: Tajwar Saiyeed
    Date: 2025-02-19 10:32:24
    File: A. Doremy's Paint 3.cpp
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
    vi a(n);
    map<int, int> mp;
    for (int &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    if (mp.size() > 2)
    {
        no;
        return;
    }

    auto fst = mp.begin()->second;
    // auto snd = (--mp.begin())->second;
    auto snd = mp.rbegin()->second;
    if (abs(fst - snd) <= 1)
    {
        yes;
    }
    else
    {
        no;
    }

    // set<int> st;
    // for (auto &x : a)
    // {
    //     cin >> x;
    //     st.insert(x);
    // }

    // if (st.size() > 2)
    // {
    //     no;
    //     return;
    // }

    // auto it = st.begin();
    // int x = *it;
    // int y = *(++it);

    // int fst = count(a.begin(), a.end(), x);
    // int snd = count(a.begin(), a.end(), y);

    // if (abs(fst - snd) <= 1)
    // {
    //     yes;
    // }
    // else
    // {
    //     no;
    // }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :

// #include <iostream>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     int a[n];
//     int r1, r2, rn1 = 0, rn2 = 0;
//     cout << "I don't care.\n";
//     return 0;
// }