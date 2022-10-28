//bank_account.h
class BankAccount
{
public://other code like main, test cases, other classes can call public functions
   //Class constructor, initializes variables for classes
   BankAccount(){}//default constructor
   BankAccount(int b) : balance(b){/*empty function block*/}
   int get_balance()const {return balance;}


private://access specifier 
   int balance = 0;//BankAccount wants to portect it's data(variables)
};