// Write down a C++ program using a class called temp and member function called convert that will ask for a temperature in Celsius and display it in Fahrenheit implement the program using. function with argument and return value

#include <iostream>
using namespace std;

class Temp {
    public:
        float convert(float);
};

float Temp::convert(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    Temp temp;
    float celsius;
    cin >> celsius;
    cout << temp.convert(celsius) << endl;
    return 0;
}

