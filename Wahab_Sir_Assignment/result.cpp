#include <iostream>

using namespace std;

class Solution
{
public:
    float result(int a, int b)
    {
        float c;
        c = 0.5 * a * b;
        return c;
    }
};

int main()
{
    Solution obj;
    float c = obj.result(5, 7);
    cout << "The area of the triangle is: " << c << endl;
    return 0;
}