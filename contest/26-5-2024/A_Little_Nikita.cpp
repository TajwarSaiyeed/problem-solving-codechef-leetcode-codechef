/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 21:12:16
    File: A_Little_Nikita.cpp
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
        int n, m;
        cin >> n >> m;

        if (n >= m)
        {
            if (n == m)
            {
                yes;
            }
            else
            {
                if (n % 2 == 0 && m % 2 == 0)
                {
                    yes;
                }
                else if (n % 2 != 0 && m % 2 != 0)
                {
                    yes;
                }
                else
                {
                    no;
                }
            }
        }
        else
        {
            no;
        }
    }

    return 0;
}