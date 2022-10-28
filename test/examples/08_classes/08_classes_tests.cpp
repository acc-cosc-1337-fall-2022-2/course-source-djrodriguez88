#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance")
{
	//assuming bankaccountdb existed and we retrieved the balance from there
	BankAccount account(100);//create an instance of the BankAccount class

	REQUIRE(account.get_balance() == 100);
}