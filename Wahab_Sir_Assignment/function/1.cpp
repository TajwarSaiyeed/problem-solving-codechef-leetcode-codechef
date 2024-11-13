// function return with no argument
#include <iostream>
using namespace std;

class Solution
{
public:
    int summation()
    {
        int a, b;
        cin >> a >> b;
        return a + b;
    }
};

int main()
{
    Solution sol;
    sol.summation();
    return 0;
}