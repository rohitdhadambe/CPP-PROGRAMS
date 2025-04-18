#include <iostream>
using namespace std;

class BankAccount {
 public:
    string name;
    int accNum;
    double balance;

    void create() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accNum;
        cout << "Enter balance: ";
        cin >> balance;
     }

      void deposit() {
        double amt;
        cout << "Deposit amount: ";
        cin >> amt;
        balance += amt;
  }

    void withdraw() {
        double amt;
           cout << "Withdraw amount: ";
             cin >> amt;
            balance -= amt;
        
    }

    void show() {
        cout << "\nName: " << name;
        cout << "\nAcc No: " << accNum;
          cout << "\nBalance: " << balance << "\n";
    }
};

int main() {
    BankAccount b;
    b.create();
    int ch;
    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Show\n4.Exit\nChoice: ";
        cin >> ch;
        if (ch == 1) b.deposit();
        else if (ch == 2) b.withdraw();
        else if (ch == 3) b.show();
        
    } while (ch != 4);
    
    return 0;
}
