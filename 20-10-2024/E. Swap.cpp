/*
    Author: Tajwar Saiyeed
    Date: 2024-10-20 20:53:29
    File: E. Swap.cpp
*/

#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}