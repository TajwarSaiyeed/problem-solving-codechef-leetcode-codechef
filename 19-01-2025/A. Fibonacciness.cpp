#include <iostream>
#include <algorithm>

using namespace std;

int calculate_fibonacciness(int a1, int a2, int a3, int a4, int a5)
{
    return (a3 == a1 + a2) + (a4 == a2 + a3) + (a5 == a3 + a4);

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int max_fibonacciness = 0;

        int candidates[] = {a1 + a2, a4 - a2, a5 - a4};
        

        for (int a3 : candidates)
        {
            max_fibonacciness = max(max_fibonacciness, calculate_fibonacciness(a1, a2, a3, a4, a5));
        }

        cout << max_fibonacciness << endl;
    }

    return 0;
}
