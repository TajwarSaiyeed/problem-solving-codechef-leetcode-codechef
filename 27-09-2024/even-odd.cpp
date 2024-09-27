#include <iostream>

using namespace std;

class Solution
{
public:
    void evenOdd();
};

void Solution::evenOdd()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main()
{
    Solution ev;
    ev.evenOdd();
    return 0;
}