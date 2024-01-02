// Question:
// You are designing a program to model a bank system. Define two classes,
//  Account and Transaction, where Account represents a bank account with attributes 
//  such as accountNumber and balance, and Transaction represents a financial transaction.
// Implement a friend function named performTransaction inside the Transaction class
//  that takes objects of both Account and Transaction as parameters. 
//  The function should add the transaction amount to the account balance and update the transaction history.
// Additionally, include methods in both the Account and Transaction 
// classes to display relevant information (displayAccountInfo for Account and displayTransactionInfo for Transaction).
// Write a C++ program that demonstrates the use of the friend 
// function to perform transactions and the methods to display account and transaction information. 
// Create instances of the Account and Transaction classes, perform transactions, and then display the updated information.
// Please provide the C++ code to implement this scenario.

#include<bits/stdc++.h>
using namespace std;
class account{
    public:
    int accnum;
    float bal;
    account(){}
    account(int accnum,float bal)
    {
        this->accnum=accnum;
        this->bal=bal;
    }
    void disp()
    {
        cout<<"the acc number and balance is"<<accnum<<" "<<bal;
    }
};
class transaction{
    public:
    bool action;
    int amount;
    transaction(){}
    transaction(bool action,int amount)
    {   
       this->action=action;
       this->amount=amount;
       if(action==0)
       {
           cout<<"the action being performed is withdrawal";
       }
       else
       {
        cout<<"the action being performed is deposit";

       }

    }
    friend void performTransaction(account&,transaction&);

};
class perform{
    public:
        void performTransaction(account &,transaction &);
};

void perform:: performTransaction(account &a,transaction &t)
{
    if(t.action==0)
    {
        if(a.bal>t.amount || a.bal==t.amount)
        {
            a.bal=a.bal-t.amount;
        }
        else
        {
            cout<<"you do not have enough money to wihtdraw the amount";
        }
    }
    if(t.action==1)
    {
        a.bal=a.bal+t.amount;
    }
}
int main()
{
    account a1(1001,50),a2(1020,100);
    transaction t1(1,75),t2(0,30);
    perform p;
    p.performTransaction(a1,t1);
    a1.disp();
    p.performTransaction(a2,t2);
    a2.disp();
    return 0;
}