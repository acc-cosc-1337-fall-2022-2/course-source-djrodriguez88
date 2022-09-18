#include "hwexpressions.h"


double get_sales_tax_amount(double meal_amount)
{
	double tax_rate = .0675;
	return tax_rate * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return tip_rate * meal_amount;
}






