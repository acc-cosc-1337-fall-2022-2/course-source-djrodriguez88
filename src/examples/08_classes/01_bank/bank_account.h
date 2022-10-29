//bank_account.h
#include<stdlib.h>//rand function
#include <iostream>

class BankAccount
{
    friend void show_balance(const BankAccount& account);//not a class function
    friend std::ostream& operator<<(std::ostream& out, const BankAccount& account);
public://other code like main, test cases, other classes can call public functions
   //Class constructor, initializes variables for classes
   BankAccount(){set_balance_from_db();}//default constructor
   BankAccount(int b) : balance(b){/*empty function block*/}
   int get_balance()const {return balance;}
   void deposit(int amount);
   void withdraw (int amount);

private://access specifier 
   int balance{0};//BankAccount wants to protect it's data(variables)
   void set_balance_from_db();
};

//FREE FUNCTIONS NOT PART OF BANKACCOUNT CLASS
void display_balance(BankAccount account);
BankAccount get_account();
