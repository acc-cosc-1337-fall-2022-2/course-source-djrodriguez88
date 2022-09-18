#include<iostream>
#include "hwexpressions.h"

using std::cout;
using std::cin;


int main()
{
	double meal_amount;
	double tip_percent;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter the meal amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the tip rate % (no decimals): ";
	cin>>tip_percent;
	tip_rate = tip_percent * .01;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tax_amount + tip_amount;

	cout<<"Meal amount: "<<meal_amount<<"\n";
	cout<<"Sales tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";

	return 0;
}
