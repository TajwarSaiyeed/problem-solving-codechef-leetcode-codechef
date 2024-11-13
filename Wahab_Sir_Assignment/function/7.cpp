// Function with argument and no return
#include <iostream>
using namespace std;

class Solution
{
public:
    void summation(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
};

int main()
{
    Solution sol;
    sol.summation(2, 4, 6);
    return 0;
}