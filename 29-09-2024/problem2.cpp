// write down a c++ program to check whether a number is prime or not using function with arguments and bun no return type

#include <iostream>
using namespace std;

class Solution {
    public:
        void checkPrime(int);
};

void Solution::checkPrime(int num) {
    bool isPrime = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << num << " is a prime number" << endl;
    } else {
        cout << num << " is not a prime number" << endl;
    }
}

int main() {
    Solution solution;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    solution.checkPrime(num);
    return 0;
}