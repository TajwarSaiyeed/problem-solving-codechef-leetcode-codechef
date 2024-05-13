/*
    Author: Tajwar Saiyeed
    Date: 2024-05-13 11:15:14
    File: B. Following Directions.cpp
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
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
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
        string s;
        cin >> s;
        int x = 0, y = 0;

        bool flag = false;
        for (char a : s)
        {
            if (x == 1 && y == 1)
                flag = true;

            if (a == 'U')
                y++;
            else if (a == 'D')
                y--;
            else if (a == 'R')
                x++;
            else
                x--;

            if (x == 1 && y == 1)
                flag = true;
        }

        if (flag)
            yes;
        else
            no;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1791/problem/B
// Submission : https://codeforces.com/contest/1791/submission/260744524