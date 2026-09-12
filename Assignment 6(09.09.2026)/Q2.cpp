#include <iostream>
using namespace std;

class BankAccount 
{
private:
   string name;
   float balance;
public:
   BankAccount(string n,float b)
   {
    name=n;
    balance=b;
   }
   BankAccount(const BankAccount &account)
   {
    name=account.name;
    balance=account.balance;
   }
   void deposit(float amount)
   {
    balance=balance+amount;
   }
   void display()
   {
    cout << "Account Holder: " << name << endl;
    cout << "Balance: " << balance << endl;
   }
};
int main()
{
    BankAccount account1("Piya",1000)
    BankAccount account2(acccount1);

    account2.deposit(5000);

    cout << "Original Account: " << endl;
    account1.display();

    cout << "\nJoint Account: " << endl;
    account2.display();

    return 0;
}