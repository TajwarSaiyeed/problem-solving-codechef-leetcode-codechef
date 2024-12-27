#include <iostream>
using namespace std;

class Factorial {
    int n;
public:
    Factorial(int x): n(x) {}
    friend int fact(Factorial f);
};
int fact(Factorial f) {
    int res = 1;
    for(int i = 1; i <= f.n; ++i) {
        res *= i;
    }
    return res;
}

int main() {
    int num;
    cin >> num;
    Factorial f(num);
    cout << fact(f);
    return 0;
}