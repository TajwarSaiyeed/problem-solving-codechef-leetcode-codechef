#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

    void initializeValue()
    {
        cout << "INPUT" << endl;
        string name;
        cin >> name;
        depositorName = name;
        int number;
        cin >> number;
        accountNumber = number;
        string type;
        cin >> type;
        accountType = type;
        float Inputbalance;
        cin >> Inputbalance;
        balance = Inputbalance;
    }
    void depositAmount()
    {
        float depositTaka;
        cin >> depositTaka;
        balance = balance + depositTaka;
    }
    void displayNameAndBalance()
    {
        cout << "Account Holder Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount sayed;
    sayed.initializeValue();
    sayed.depositAmount();
    sayed.displayNameAndBalance();
}
