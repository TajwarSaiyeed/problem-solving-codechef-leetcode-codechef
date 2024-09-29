#include<iostream>
#include<iomanip>
using namespace std;

class Solution {
    public:
        void display();
};

void Solution::display() {
    int basic = 950, allowence = 95;
    cout << setw(10) << "Basic" << setw(10) << basic << endl;
    cout << setw(10) << "Allowence" << setw(10) << allowence << endl;
}

int main() {
    Solution solution;
    solution.display();
    return 0;
}