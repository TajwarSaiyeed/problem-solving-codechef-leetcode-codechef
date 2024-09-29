// Area of Triangle : 0.5 * base * height

#include<iostream>
using namespace std;

class Solution {
    public:
        void calculate_area() ;
};

void Solution::calculate_area() {
    float base, height;
    cin>>base>>height;
    float area = 0.5 * base * height;
    cout << "Area of Triangle with is " << area << endl;
}

int main() {
    Solution obj;
    obj.calculate_area();
    return 0;
}