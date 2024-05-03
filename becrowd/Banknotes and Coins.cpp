/*
    Author: Tajwar Saiyeed
    Date: 2024-05-02 13:24:33
    File: Banknotes and Coins.cpp
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

    double n;
    cin >> n;
    n += 1e-9;

    int num100, num50, num20, num10, num5, num2, num1, num050, num025, num010, num005, num001;

    num100 = n / 100;
    n -= num100 * 100;

    num50 = n / 50;
    n -= num50 * 50;

    num20 = n / 20;
    n -= num20 * 20;

    num10 = n / 10;
    n -= num10 * 10;

    num5 = n / 5;
    n -= num5 * 5;

    num2 = n / 2;
    n -= num2 * 2;

    cout << "NOTAS:\n";
    cout << num100 << " nota(s) de R$ " << dt(2) << 100.00 << '\n';
    cout << num50 << " nota(s) de R$ " << dt(2) << 50.00 << '\n';
    cout << num20 << " nota(s) de R$ " << dt(2) << 20.00 << '\n';
    cout << num10 << " nota(s) de R$ " << dt(2) << 10.00 << '\n';
    cout << num5 << " nota(s) de R$ " << dt(2) << 5.00 << '\n';
    cout << num2 << " nota(s) de R$ " << dt(2) << 2.00 << '\n';

    num1 = n / 1;
    n -= num1 * 1;
    num050 = n / .50;
    n -= num050 * .50;
    num025 = n / .25;
    n -= num025 * .25;
    num010 = n / .1;
    n -= num010 * .1;
    num005 = n / .05;
    n -= num005 * .05;
    num001 = n / .01;
    n -= num001 * .01;

    cout << "MOEDAS:\n";
    cout << num1 << " moeda(s) de R$ " << dt(2) << 1.00 << '\n';
    cout << num050 << " moeda(s) de R$ " << dt(2) << 0.50 << '\n';
    cout << num025 << " moeda(s) de R$ " << dt(2) << 0.25 << '\n';
    cout << num010 << " moeda(s) de R$ " << dt(2) << 0.10 << '\n';
    cout << num005 << " moeda(s) de R$ " << dt(2) << 0.05 << '\n';
    cout << num001 << " moeda(s) de R$ " << dt(2) << 0.01 << '\n';

    return 0;
}

/*
    // Accpeted

    int quantity;
    double amount;
    double notes[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    scanf("%lf", &amount);
    amount += 1e-9;

    printf("NOTAS:\n");

    for (int i = 0; i < 12; i++)
    {
        if (notes[i] >= 1)
        {
            quantity = amount / notes[i];
            amount = fmod(amount, notes[i]);
        }
        else
        {
            quantity = amount / (notes[i] * 100);
            amount = fmod(amount, (notes[i] * 100));
        }

        if (notes[i] > 1)
        {
            printf("%d nota(s) de R$ %.2lf\n", quantity, notes[i]);
        }
        else if (notes[i] == 1)
        {
            printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ 1.00\n", quantity);
            amount *= 100;
        }
        else
        {
            printf("%d moeda(s) de R$ %.2lf\n", quantity, notes[i]);
        }
    }


*/