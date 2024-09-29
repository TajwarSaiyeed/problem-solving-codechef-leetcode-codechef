// Convert Celsius to Fahrenheit
// Formula	(0°C × 9/5) + 32 = 32°F

#include<iostream>
using namespace std;

class Solution {
    public:
        void cel_to_far() ;
};

void Solution::cel_to_far() {
    float celsius;
    cin>>celsius;
    float fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit is " << fahrenheit << endl;
}

int main() {
    Solution obj;
    obj.cel_to_far();
    return 0;
}
