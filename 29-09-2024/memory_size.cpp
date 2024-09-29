// Write a program to calculate the memory size of int, float, double, char, and bool data types.

#include <iostream>
using namespace std;
class Solution {
public:
    void calculateMemorySize();
};

void Solution::calculateMemorySize()
{
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
}

int main() {
    Solution memorySize;
    memorySize.calculateMemorySize();
    return 0;
}
