// Perimeter of circle formula: 2 * pi * r

#include<iostream>
using namespace std;

class Solution {
    public:
        void calculate_perimeter() ;
};

void Solution::calculate_perimeter() {
    float radius;
    cin>>radius;
    float perimeter = 2 * 3.14 * radius;
    cout << "Perimeter of Circle is " << perimeter << endl;
}

int main() {
    Solution obj;
    obj.calculate_perimeter();
    return 0;
}