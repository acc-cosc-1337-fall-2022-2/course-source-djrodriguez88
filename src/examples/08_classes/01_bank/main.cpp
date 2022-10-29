#include"bank_account.h"
#include"time.h"
#include "string"

using std::cout;
using std::string;

int main()
{
    string name = "C++";

    //truly generate a random every time

    srand(time(NULL));
    BankAccount account;

    cout<<account.get_balance()<<"\n";
    std::cout<<account<<"\n";


    display_balance(account);

    BankAccount account1 = get_account();
    cout<<account1.get_balance()<<"\n";

    show_balance(account1);

	return 0;
}

