#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    string name;
    int accountNumber;
    string accountType;
    double balance;

    void assignValues(string name, int accountNumber, string accountType, double balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Bhai tumhara Khata Khali hai to pahele Khate mein paise dal,pata nahi chale aate hai kaha kaha se muh utha ke" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.assignValues("MR.Soham Parmar", 123456, "Savings", 1000.0);

    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();

    return 0;
}