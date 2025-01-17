/*
    Author: Tajwar Saiyeed
    Date: 2025-01-17 21:38:04
    File: A. Lucky Division.cpp
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

vector<int> l_number = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774};

void solve()
{
    int n;
    cin >> n;
    if (find(l_number.begin(), l_number.end(), n) != l_number.end())
    {
        yes;
        return;
    }
    else
    {
        for (int i = 0; i < l_number.size(); i++)
        {
            if (n % l_number[i] == 0)
            {
                yes;
                return;
            }
        }
    }
    no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

// Problem :