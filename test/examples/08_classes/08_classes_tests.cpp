#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance no constructor param")
{
    BankAccount account;
   // REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test bank account get balance")
{
	//assuming bankaccountdb existed and we retrieved the balance from there
	BankAccount account(100);//create an instance of the BankAccount class

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test Bank account deposit function")
{
    BankAccount account (100);
    REQUIRE(account.get_balance() == 100);

    account.deposit(50);
    REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test bank account withdraw function")
{
    BankAccount account(100);
    REQUIRE(account.get_balance() == 100);

    account.withdraw(50);
    REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test bank account deposit and withdraw functions")
{
    BankAccount account(100);
    REQUIRE(account.get_balance() == 100);

    account.deposit(50);
    REQUIRE(account.get_balance() == 150);

    account.withdraw(50);
    REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account deposit with negative amount")
{
    BankAccount account(100);
    REQUIRE(account.get_balance() == 100);

    account.deposit(-50);
    REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account withdraw with negative amount")
{
    BankAccount account(100);
    REQUIRE(account.get_balance() == 100);

    account.withdraw(-50);
    REQUIRE(account.get_balance() == 100);

    account.withdraw(-200);
    REQUIRE(account.get_balance() == 100);
}
