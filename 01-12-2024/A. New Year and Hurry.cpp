/*
    Author: Tajwar Saiyeed
    Date: 2024-12-02 22:23:16
    File: A. New Year and Hurry.cpp
*/


#include <iostream>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;

    int totalMinutes = 240;
    int availableMinutes = totalMinutes - k;
    int timeSpent = 0, solvedProblems = 0;

    for (int i = 1; i <= n; ++i)
    {
        timeSpent += 5 * i;
        if (timeSpent > availableMinutes)
        {
            break;
        }
        ++solvedProblems;
    }

    cout << solvedProblems << endl;
    return 0;
}

