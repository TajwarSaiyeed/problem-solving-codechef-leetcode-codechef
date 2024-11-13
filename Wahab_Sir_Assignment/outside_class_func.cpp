#include <iostream>

using namespace std;

class Solution
{
public:
    void print();
};

void Solution::print()
{
    cout << "Hello world" << endl;
}

int main()
{
    Solution sol;
    sol.print();
    return 0;
}