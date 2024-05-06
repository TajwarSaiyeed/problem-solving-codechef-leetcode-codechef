/*
    Author: Tajwar Saiyeed
    Date: 2024-05-06 08:33:15
    File: A. Odd Set.cpp
*/
#include <bits/stdc++.h>
using namespace std;
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
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int oddCount = 0, evenCount = 0;
        fr(i, 0, 2 * n)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        if (oddCount == evenCount)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1542/A
// https://codeforces.com/contest/1542/submission/259704230