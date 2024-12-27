#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class CreditCard
{
private:
    string cardNumber;

    bool isNumeric(const string &str)
    {
        for (char c : str)
        {
            if (!isdigit(c))
            {
                return false;
            }
        }
        return true;
    }

    bool luhnCheck(const string &cardNumber)
    {
        int sum = 0;
        bool alternate = false;

        for (int i = cardNumber.size() - 1; i >= 0; i--)
        {
            int digit = cardNumber[i] - '0';

            if (alternate)
            {
                digit *= 2;
                if (digit > 9)
                {
                    digit -= 9;
                }
            }
            sum += digit;
            alternate = !alternate;
        }

        return (sum % 10 == 0);
    }

public:
    CreditCard(const string &number) : cardNumber(number) {}

    bool validate()
    {
        if (cardNumber.empty())
        {
            cout << "Error: Card number is empty." << endl;
            return false;
        }

        if (!isNumeric(cardNumber))
        {
            cout << "Error: Card number contains invalid characters." << endl;
            return false;
        }

        if (cardNumber.length() < 13 || cardNumber.length() > 19)
        {
            cout << "Error: Card number must be between 13 and 19 digits." << endl;
            return false;
        }

        return luhnCheck(cardNumber);
    }

    string getCardNumber() const
    {
        return cardNumber;
    }
};

int main()
{
    string cardNumber;
    cout << "Enter your credit card number: ";
    cin >> cardNumber;

    CreditCard card(cardNumber);

    if (card.validate())
    {
        cout << "The credit card number " << card.getCardNumber() << " is valid." << endl;
    }
    else
    {
        cout << "The credit card number " << card.getCardNumber() << " is invalid." << endl;
    }

    return 0;
}