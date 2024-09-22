/*
    Author: Tajwar Saiyeed
    Date: 2024-09-22 22:29:05
    File: J. Primes from 1 to n.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int prime[n + 1];

    for (int i = 1; i <= n; i++)
        prime[i] = 1;

    for (int i = 2; i * i <= n; i++)
        if (prime[i] == 1)
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;

    for (int i = 2; i <= n; i++)
        if (prime[i] == 1)
            cout << i << " ";

    return 0;
}

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J