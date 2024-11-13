// Function with argument and no return
#include <iostream>
using namespace std;

class Solution
{
public:
    void multiplication(int a, int b, int c)
    {
        cout << a * b * c << endl;
    }
};

int main()
{
    Solution sol;
    sol.multiplication(6, 4, 3);
    return 0;
}