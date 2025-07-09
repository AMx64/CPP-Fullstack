#include <iostream>
#include <iomanip>
using namespace std;

class bank{
    private:
        float balance;
        string id;
        string password;
    public:
        bank(float money, string userid, string passkey): balance(money), id(userid), password(passkey) {cout << "Current balance is: " << balance << "\n";}
        void deposit(float money) {
            balance += money;
            cout << "Current balance is: " << balance << "\n";
        }
        void withdraw(float money, string pwd) {
            if (pwd != password) cout << "Access denied. Password incorrect" << "\n";
            else if (money <= balance) {
                balance -= money;
                cout << "Current balance is: " << balance << "\n";
            }
            else cout << "Insufficient funds" << "\n";
            
        }
        void viewbalance(string pwd) {
            if (pwd != password) cout << "Access denied. Password incorrect" << "\n";
            else {
                cout << "Password correct. Your current balance is " << balance << "\n";
            }
        } 
};

int main() {
    cout << fixed << setprecision(2);
    float deposit;
    string userid, password;
    cout << "Enter first deposit amount: " << "\n";
    cin >> deposit;
    cout << "Enter USERID: " << "\n";
    cin >> userid;
    cout << "Enter password: " << "\n";
    cin >> password;
    bank mybank(deposit, userid, password);
    cout << "Welcome to your bank account UID: " << userid << "\n";
    short a;
    do{
        while(true) {
            cout << "Press(1-4): " << "\n"
                << "       1> View current Balance" << "\n"
                << "       2> Deposit" << "\n"
                << "       3> Withdraw" << "\n"
                << "       4> Exit" << "\n"
                << "User Input: ";
            cin >> a;
            if (a >= 1 && a <= 4) break;
            else cout << "Invalid Input" << "\n";

        }
        switch (a)
        {
        case 1: {
            string password_check;
            cout << "Re-enter password to confirm identity for " << userid << ": ";
            cin >> password_check;
            mybank.viewbalance(password_check);
            break;
        }
        case 2: {
            float amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            mybank.deposit(amount);
            break;
        }
        case 3: {
            float amount;
            string password_check;
            cout << "Re-enter password to confirm identity for " << userid << ": ";
            cin >> password_check;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            mybank.withdraw(amount, password_check);
            break;
        }
        }        
    }
    while (a != 4);
    return 0;
}