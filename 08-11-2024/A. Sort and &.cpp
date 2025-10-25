/*
    Author: Tajwar Saiyeed
    Date: 2024-11-08 16:14:44
    File: A. Sort and &.cpp

    You are given a permutation of size N. You want to sort it. In one operation you can swap the i
th and the j
th
elements (1 ≤ i, j ≤ N) and it will cost you i&j (bitwise AND of i and j). Total sum of sorting the permutation is
the sum of the cost of all the operations you will make. You can’t make more than 3*N operations. Print the
minimum cost to sort the permutation and also print one sequence of swap operations which will sort the
permutation in the minimum cost.
Input
The first line will contain a single integer T (1 ≤ T ≤ 10
4
). Each test case will start with one integer N (1 ≤ N ≤
10
4
), the length of the permutation. The next line will contain N integers a1
, a2
, …. , aN (1 ≤ ai ≤ N). It is
guaranteed that, in any input file N ≤ 10
5 Σ across all the test cases.
Input file is large. Please be sure to use faster input/output methods.
Output
For each test case, the first line of the output should contain the minimum cost to sort the array. The next
line should contain the number of required operations. Then each next line should contain two integers
describing the indices being swapped. Please see the sample for details.
Sample Input Output for Sample Input
1
4
3 1 4 2
0
3
1 4
1 2
3 4
Notes
Permutation of size N is an array of size N where each number from 1…N appears exactly once.
i&j denotes bitwise AND between integer i and integer j.
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> swaps;
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] != sorted_a[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == sorted_a[i])
                {
                    swaps.push_back({i + 1, j + 1});
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }

    ll total_cost = 0;
    for (auto &swap_pair : swaps)
    {
        total_cost += (swap_pair.first & swap_pair.second);
    }

    cout << total_cost << nl;
    cout << swaps.size() << nl;
    for (auto &swap_pair : swaps)
    {
        cout << swap_pair.first << " " << swap_pair.second << nl;
    }
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