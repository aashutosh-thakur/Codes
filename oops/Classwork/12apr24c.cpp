//Implement a C++ class called BankAccount with private data. members balance and accountNumber. Create a friend function named transfer Funds outside the class, which takes two BankAccount objects as parameters and transfers a specified amount from one account to another, updating their balances accordingly.
#include<iostream>
using namespace std;
class Bank{
    private:
        string accountnum;
        float balance;
    public:
        Bank(float bAlance, string accountNum): balance(bAlance),accountnum(accountNum){}
        friend void transferFunds(Bank &from, Bank &to,float amount);
        void display(){
            cout<<"Account Number: "<<accountnum<<",Balance: "<<balance;
        }
};
