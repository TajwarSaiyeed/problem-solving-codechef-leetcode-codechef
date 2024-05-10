#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "Enter month (1-12): ";
    int month;
    cin >> month;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month. Please enter a value between 1 and 12." << endl;
        return 1;
    }

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = ltm->tm_mon;
    int currentDay = ltm->tm_mday;

    ltm->tm_year = currentYear - 1900;
    ltm->tm_mon = month - 1;
    mktime(ltm);
    int numDays = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        numDays = 30;
    else if (month == 2)
        if (ltm->tm_year % 4 == 0 && (ltm->tm_year % 100 != 0 || ltm->tm_year % 400 == 0))
            numDays = 29;
        else
            numDays = 28;

    cout << "  " << month << "/" << currentYear << endl;
    cout << "---------------------------" << endl;
    cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

    int dayOfWeek = ltm->tm_wday;

    for (int i = 0; i < dayOfWeek; i++)
        cout << setw(6) << " ";

    for (int day = 1; day <= numDays; day++)
    {
        if (month == currentMonth && day == currentDay)
            cout << setw(4) << "*" << day;
        else
            cout << setw(6) << day;

        if ((dayOfWeek + day) % 7 == 0)
            cout << '\n';
    }
    cout << '\n';

    return 0;
}

// Problem : https://codeforces.com/contest/1742/problem/B
// Submission : https://codeforces.com/contest/1742/submission/260261790
