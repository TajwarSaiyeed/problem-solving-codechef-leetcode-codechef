#include <iostream>
using namespace std;

class Solution
{
public:
    int factorial(int n)
    {
        if (n == 1)
        {
            return n;
        }
        return n * factorial(n - 1);
    }

    int fibo(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        return fibo(n - 1) + fibo(n - 2);
    }
    void display()
    {
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