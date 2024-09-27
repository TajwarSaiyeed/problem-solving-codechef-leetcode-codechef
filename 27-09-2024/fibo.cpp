#include <iostream>
using namespace std;

class Solution
{
public:
    void fibonacci_series()
    {
        int n;
        cin >> n;
        int first = 0, second = 1;
        cout << first << " " << second << " ";
        for (int i = 2; i <= n; i++)
        {
            int result = first + second;
            first = second;
            second = result;
            cout << result << " ";
        }
    }
};

int main()
{
    Solution fibo_finding;
    fibo_finding.fibonacci_series();
    return 0;
}