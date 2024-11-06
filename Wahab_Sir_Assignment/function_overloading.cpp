#include <iostream>
using namespace std;

class Overload
{
public:
    void overload()
    {
        int a, area;
        cin >> a;
        area = a * a;
        cout << "The area of a square " << area << endl;
    }

    float overload(int a, int b)
    {
        float area;
        area = 0.5 * a * b;
        return area;
    }
};

int main() {
    Overload obj;
    obj.overload();
    cout << obj.overload(5,7) << endl;
    return 0;
}