// Function return with argument
#include <iostream>
using namespace std;

class Solution
{
public:
    float multiplication(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    Solution sol;
    float result = sol.multiplication(2, 4);
    cout << result << endl;
    return 0;
}