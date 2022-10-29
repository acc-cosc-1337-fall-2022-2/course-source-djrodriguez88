//bank_account.cpp
#include "bank_account.h"

using std::cout;

void BankAccount::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount < balance)
    {
        balance -= amount;
    }
}


//private class functions
void BankAccount::set_balance_from_db()
{
    balance = rand() % 1000 + 1;///value btwn 1 and 10k
}

//Friend functions are not class functions - are free functions
void show_balance(const BankAccount& account)
{
    cout<<"Friend: "<<account.balance<<"\n";
}
//Operator overload using friends
std::ostream& operator<<(std::ostream& out, const BankAccount& account)
{
    out<<"Operator overload "<<account.balance<<"\n";

    return out;
}

//FREE FUNCTIONS NOT PART OF BANKACCOUNT CLASS
void display_balance(BankAccount account)
{
    account.deposit(50);
    cout<<"Display Balance: "<<account.get_balance()<<"\n";
}

BankAccount get_account()
{
    BankAccount account;
    return account;
}