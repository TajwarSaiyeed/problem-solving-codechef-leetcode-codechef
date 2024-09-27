#include <iostream>
using namespace std;

class PrimeNumberSolution
{
public:
    void amiPrimeCheckKorteci();
};

void PrimeNumberSolution::amiPrimeCheckKorteci()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

int main()
{
    PrimeNumberSolution prime;
    prime.amiPrimeCheckKorteci();

    return 0;
}