
// Area of Triangle with 3 Sides Formula

    #include<iostream>
    #include<cmath>
    using namespace std;

    class Solution {
        public:
            void calculate_area() ;
    };

    void Solution::calculate_area() {
        float a, b, c;
        cin>>a>>b>>c;
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle with is " << area << endl;
    }

    int main() {
        Solution obj;
        obj.calculate_area();
        return 0;
    }