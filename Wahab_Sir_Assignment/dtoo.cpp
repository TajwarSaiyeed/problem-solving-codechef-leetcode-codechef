#include <iostream>
using namespace std;

class DecimalConverter
{
private:
    int decimalNumber;

public:
    void display()
    {
        cin >> decimalNumber;

        int num = decimalNumber;
        int octalNumber = 0, placeValue = 1;

        while (num > 0)
        {
            int remainder = num % 8;
            octalNumber += remainder * placeValue;
            num /= 8;
            placeValue *= 10;
        }

        cout << "Decimal: " << decimalNumber << " -> Octal: " << octalNumber << endl;
    }
};

int main()
{
    DecimalConverter decimalObj;
    decimalObj.display();

    return 0;
}
