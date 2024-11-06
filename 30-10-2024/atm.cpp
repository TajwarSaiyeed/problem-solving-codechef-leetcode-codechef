#include<bits/stdc++.h>

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
    double getBalance() const { 
        stringstream ss;
        ss << fixed << setprecision(2) << balance;
        return stod(ss.str());
    }

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
             << motherName << " " << age << " " << balance << endl;
        file.close();
    }

    bool loadFromFile(const string &uname)
    {
        ifstream file("users.txt");
        User temp;
        while (file >> temp.username >> temp.password >> temp.fatherName >> temp.motherName >> temp.age >> temp.balance)
        {
            if (temp.username == uname)
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

        while (file >> tempUser.username >> tempUser.password >> tempUser.fatherName >> tempUser.motherName >> tempUser.age >> tempUser.balance)
        {
            if (tempUser.username == username)
            {
                temp << username << " " << password << " " << fatherName << " "
                     << motherName << " " << age << " " << balance << endl;
            }
            else
            {
                temp << tempUser.username << " " << tempUser.password << " "
                     << tempUser.fatherName << " " << tempUser.motherName << " "
                     << tempUser.age << " " << tempUser.balance << endl;
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

    newUser.setBalance(0.0); 
    newUser.saveToFile(); 

    cout << "User registered successfully!" << endl;
}

bool loginUser(User &user)
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (user.loadFromFile(username) && user.checkPassword(password))
    {
        cout << "Login successful!" << endl;
        return true;
    }
    else
    {
        cout << "Invalid username or password." << endl;
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
