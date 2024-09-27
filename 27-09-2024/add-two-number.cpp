#include <iostream>

using namespace std;

class Solution
{
public:
    void addTwoNumber();
};

void Solution::addTwoNumber()
{
    int a, b;
    cin >> a >> b;
    int result = a + b;
    cout << "Output in addTwoNumber Function : " << result << endl;
}

int main()
{
    Solution mahibe;
    mahibe.addTwoNumber();

    return 0;
}