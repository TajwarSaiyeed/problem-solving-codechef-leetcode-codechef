// QUADRATIC EQUATION : ax^2 + bx + c = 0

#include<iostream>
#include<cmath>
using namespace std;

class Solution {
    public:
        void quadratic_equation() ;
};


void Solution::quadratic_equation() {
    float a, b, c;
    cin>>a>>b>>c;
    float d = b * b - 4 * a * c;
    if (d < 0) {
        cout << "Roots are complex" << endl;
        return;
    }

    float root1 = (-b + sqrt(d)) / (2 * a);
    float root2 = (-b - sqrt(d)) / (2 * a);
    cout << "Roots are " << root1 << " and " << root2 << endl;
}

int main() {
    Solution obj;
    obj.quadratic_equation();
    return 0;
}