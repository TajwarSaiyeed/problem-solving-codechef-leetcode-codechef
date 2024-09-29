//Distance formula d= sqrt((x2-x1)^2 + (y2-y1)^2)

#include<iostream>
#include<cmath>
using namespace std;

class Solution {
    public:
        void calculate_distance() ;
};

void Solution::calculate_distance() {
    float x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance between two points is " << distance << endl;
}

int main() {
    Solution obj;
    obj.calculate_distance();
    return 0;
}