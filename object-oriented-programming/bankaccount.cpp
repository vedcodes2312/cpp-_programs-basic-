#include<iostream>
using namespace std;

class BankAccount {
    private:
    double balance;

    public:
    void set_balance(double initial_balance) {
        balance = initial_balance;
    }

   void deposit(double amount) {
    balance = balance + amount;
    cout << "deposited: " << amount << endl;
   }

   void withdraw(double amount) {
    if(amount > balance) {
        cout << "insufficient balance" << endl;
    }
    else {
        balance = balance - amount;
        cout << "withdrawn: " << amount << endl;
    }
   }

   void display_balance() {
    cout << "avaialable balance: " << balance << endl;
   }
};

int main() {
    BankAccount my_account;
    double initial_balance, deposite_amount, withdraw_amount;

    cout << "enter amount to deposite: ";
    cin >> deposite_amount;
    my_account.deposit(deposite_amount);

    cout << "enter amount to withdraw: ";
    cin >> withdraw_amount;
    my_account.withdraw(withdraw_amount);

    my_account.display_balance();
    return 0;    
}





