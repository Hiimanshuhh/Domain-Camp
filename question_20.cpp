// Implement Polymorphism for Banking Transactions
#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) : balance(b) {}

    virtual void calculateInterest() = 0; // Pure virtual function
};

class SavingsAccount : public Account {
private:
    double interestRate;
    double time;

public:
    SavingsAccount(double b, double rate, double t) : Account(b), interestRate(rate), time(t) {}

    void calculateInterest() override {
        double interest = balance * interestRate / 100 * time;
        balance += interest;
        cout << "Interest added to Savings Account: " << interest << endl;
        cout << "New Balance: " << balance << endl;
    }
};

class CurrentAccount : public Account {
private:
    double monthlyFee;

public:
    CurrentAccount(double b, double fee) : Account(b), monthlyFee(fee) {}

    void calculateInterest() override {
        balance -= monthlyFee;
        cout << "Monthly maintenance fee deducted from Current Account: " << monthlyFee << endl;
        cout << "New Balance: " << balance << endl;
    }
};

int main() {
    int accountType;
    double balance, interestRate, time, monthlyFee;

    cout << "Enter Account Type (1 for Savings, 2 for Current): ";
    cin >> accountType;

    cout << "Enter Account Balance: ";
    cin >> balance;

    if (accountType == 1) {
        cout << "Enter Interest Rate (percentage): ";
        cin >> interestRate;
        cout << "Enter Time (in years): ";
        cin >> time;

        SavingsAccount savingsAccount(balance, interestRate, time);
        savingsAccount.calculateInterest();
    } else if (accountType == 2) {
        cout << "Enter Monthly Maintenance Fee: ";
        cin >> monthlyFee;

        CurrentAccount currentAccount(balance, monthlyFee);
        currentAccount.calculateInterest();
    } else {
        cout << "Invalid Account Type!" << endl;
    }

    return 0;
}
