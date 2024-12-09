#include <bits/stdc++.h>
using namespace std;

class User
{
private:
    string username;
    string password;
    string fatherName;
    string motherName;
    int age;
    double balance;
    string accountNumber;

public:
    User() : balance(0.0) {}

    void setUsername(const string &uname) { username = uname; }
    string getUsername() const { return username; }

    void setPassword(const string &pass) { password = pass; }
    bool checkPassword(const string &pass) const { return password == pass; }

    void setFatherName(const string &fname) { fatherName = fname; }
    void setMotherName(const string &mname) { motherName = mname; }
    void setAge(int a) { age = a; }

    void setBalance(double b) { balance = b; }
    double getBalance() const { return balance; }

    void setAccountNumber()
    {
        accountNumber = username + to_string(age);
    }
    string getAccountNumber() const { return accountNumber; }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit successful! New balance: " << balance << endl;
    }

    bool withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful! New balance: " << balance << endl;
            return true;
        }
        else
        {
            cout << "Insufficient balance." << endl;
            return false;
        }
    }

    void saveToFile() const
    {
        ofstream file("users.txt", ios::app);
        file << username << " " << password << " " << fatherName << " "
             << motherName << " " << age << " " << balance << " "
             << accountNumber << endl;
        file.close();
    }

    bool loadFromFile(const string &accountNumber)
    {
        ifstream file("users.txt");
        User temp;
        while (file >> temp.username >> temp.password >> temp.fatherName >>
               temp.motherName >> temp.age >> temp.balance >> temp.accountNumber)
        {
            if (temp.accountNumber == accountNumber)
            {
                *this = temp;
                file.close();
                return true;
            }
        }
        file.close();
        return false;
    }

    void updateToFile() const
    {
        ifstream file("users.txt");
        ofstream temp("temp.txt");
        User tempUser;

        while (file >> tempUser.username >> tempUser.password >> tempUser.fatherName >>
               tempUser.motherName >> tempUser.age >> tempUser.balance >>
               tempUser.accountNumber)
        {
            if (tempUser.username == username)
            {
                temp << username << " " << password << " " << fatherName << " "
                     << motherName << " " << age << " " << balance << " "
                     << accountNumber << endl;
            }
            else
            {
                temp << tempUser.username << " " << tempUser.password << " "
                     << tempUser.fatherName << " " << tempUser.motherName << " "
                     << tempUser.age << " " << tempUser.balance << " "
                     << tempUser.accountNumber << endl;
            }
        }

        file.close();
        temp.close();
        remove("users.txt");
        rename("temp.txt", "users.txt");
    }
};

void registerUser()
{
    User newUser;
    string username, password, fatherName, motherName;
    int age;

    cout << "Enter username: ";
    cin >> username;
    newUser.setUsername(username);

    cout << "Enter password: ";
    cin >> password;
    newUser.setPassword(password);

    cout << "Enter father's name: ";
    cin >> fatherName;
    newUser.setFatherName(fatherName);

    cout << "Enter mother's name: ";
    cin >> motherName;
    newUser.setMotherName(motherName);

    cout << "Enter age: ";
    cin >> age;
    newUser.setAge(age);

    newUser.setAccountNumber();
    newUser.setBalance(0.0);
    newUser.saveToFile();

    cout << "User registered successfully!" << endl;
    cout << "Your account number: " << newUser.getAccountNumber() << endl;
}

bool loginUser(User &user)
{
    string accountNumber, password;

    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter password: ";
    cin >> password;

    if (user.loadFromFile(accountNumber) && user.checkPassword(password))
    {
        cout << "Login successful!" << endl;
        cout << "Your account number: " << user.getAccountNumber() << endl;
        return true;
    }
    else
    {
        cout << "Invalid account number or password." << endl;
        return false;
    }
}

int main()
{
    int choice;
    User currentUser;

    while (true)
    {
        cout << "\n--- ATM System ---\n";
        cout << "1. Register\n2. Login\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            registerUser();
        }
        else if (choice == 2)
        {
            if (loginUser(currentUser))
            {
                int action;
                while (true)
                {
                    cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Logout\n";
                    cout << "Choose action: ";
                    cin >> action;
                    if (action == 1)
                    {
                        double amount;
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        currentUser.deposit(amount);
                        currentUser.updateToFile();
                    }
                    else if (action == 2)
                    {
                        double amount;
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        if (currentUser.withdraw(amount))
                        {
                            currentUser.updateToFile();
                        }
                    }
                    else if (action == 3)
                    {
                        cout << "Current balance: " << currentUser.getBalance() << endl;
                    }
                    else if (action == 4)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid action!" << endl;
                    }
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting system. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
