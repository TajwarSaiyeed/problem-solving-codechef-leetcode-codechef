#include <iostream>
#include <cstring>
using namespace std;

class Solution
{
    int dp[51];

public:
    int fibo(int n)
    {
        if (n == 1)
            return 0;
        if (n == 2)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = fibo(n - 1) + fibo(n - 2);
    }

    void display()
    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}
