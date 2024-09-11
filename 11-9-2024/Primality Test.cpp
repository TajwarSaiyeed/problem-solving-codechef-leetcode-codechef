/*
    Author: Tajwar Saiyeed
    Date: 2024-09-11 06:03:26
    File: Primality Test.cpp
*/

#include <bits/stdc++.h>

using namespace std;

vector<bool> prime(100005, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 0; i * i < 100005; i++)
        if (prime[i])
            for (int j = i + i; j <= 100005; j += i)
                prime[j] = false;
}

int main()
{
    sieve();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (prime[n])
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01