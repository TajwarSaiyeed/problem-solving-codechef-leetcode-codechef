// Area of Circle : π * r * r

#include<iostream>
using namespace std;

class Solution {
    public:
        void calculate_area() ;
};

void Solution::calculate_area() {
    float radius;
    cin>>radius;
    float area = 3.14 * radius * radius;
    cout << "Area of Circle is " << area << endl;
}

int main() {
    Solution obj;
    obj.calculate_area();
    return 0;
}