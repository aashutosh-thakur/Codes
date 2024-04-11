//
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
        static int totalAccounts;
        int accountNumber;
        string accountHolder;
        double balance;
    public:
        BankAccount(string holder, double initialBalance)
        {
            totalAccounts++;
            accountNumber=totalAccounts;
            accountHolder=holder;
            balance=initialBalance;
        }
        static void displayTotalAccounts(){
            cout<<"Total accounts created: "<<totalAccounts<<endl;
        }
        void displayAccountDetails(){
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Account Holder: "<<accountHolder<<endl;
            cout<<"Balance: $"<<balance<<endl;
        }
        void deposit(double amount){
            balance += amount;
        }
        void withdraw(double amount)
        {
            if (balance>=amount){
                balance-=amount;
            }
            else{
                cout<<"Insufficient Funds!"<<endl;
            }
        }
};
int BankAccount::totalAccounts=0;
int main()
{
    //Create two bank accounts
    BankAccount account1("Alice",1000.0);
    BankAccount account2("Bob",2000.0);
    //Display account details
    account1.displayAccountDetails();
    account2.displayAccountDetails();
    //Deposit and withdraw
    account1.deposit(500.0);
    account2.withdraw(300.0);
    //Display updated balances
    account1.displayAccountDetails();
    account2.displayAccountDetails();
    //Display total accounts
    BankAccount::displayTotalAccounts();
    return 0;
}
