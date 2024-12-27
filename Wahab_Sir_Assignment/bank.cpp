#include <iostream>
#include <string>
using namespace std;

class Bank
{
    string name;
    string account;
    string account_type;
    double balance;
public:
    Bank(string n, string ac, string ac_type, double b)
    {
        name = n;
        account = ac;
        account_type = ac_type;
        balance = b;
    }

    void diposit(double amount)
    {       
        balance += amount;
    }

    void display_name_balance() {
        cout << name << " " << balance<< endl;
    }
};

int main()
{
    Bank sol("Sol", "1234", "Savings", 1000);
    return 0;
}