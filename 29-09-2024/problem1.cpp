// write down a  c++ program to find the number and sum of all integers greater than 100 and less than 200 that are divisible by 7

#include <iostream>
using namespace std;

class Solution {
    public:
        void findNumbers();
};

void Solution::findNumbers() {
    int count = 0;
    int sum = 0;
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            count++;
            sum += i;
        }
    }
    cout << "Number of integers divisible by 7: " << count << endl;
    cout << "Sum of integers divisible by 7: " << sum << endl;
}


int main() {
    Solution solution;
    solution.findNumbers();
    return 0;
}