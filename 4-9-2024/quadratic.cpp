

/*
    Problem Description:
    Write a program to find the roots of a quadratic equation ax^2 + bx + c = 0.
*/

#include <bits/stdc++.h>

using namespace std;

class QuadraticEquation
{
    double a, b, c;
    double discriminant, root1, root2;

public:
    void read()
    {
        cin >> a >> b >> c;
        discriminant = b * b - 4 * a * c;
        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << "Root 1 = " << fixed << setprecision(2) << root1 << endl;
            cout << "Root 2 = " << fixed << setprecision(2) << root2 << endl;
        }
        else if (discriminant == 0)
        {
            root1 = root2 = -b / (2 * a);
            cout << "Roots are real and same." << endl;
            cout << "Root 1 = Root 2 = " << fixed << setprecision(2) << root1 << endl;
        }
        else
        {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are complex and different." << endl;
            cout << "Root 1 = " << fixed << setprecision(2) << realPart << " + " << fixed << setprecision(2) << imaginaryPart << "i" << endl;
            cout << "Root 2 = " << fixed << setprecision(2) << realPart << " - " << fixed << setprecision(2) << imaginaryPart << "i" << endl;
        }
    }
};

int main()
{
    QuadraticEquation qe;
    qe.read();

    return 0;
}