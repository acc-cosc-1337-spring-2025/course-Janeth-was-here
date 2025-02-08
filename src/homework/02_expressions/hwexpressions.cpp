#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal_amount)
{
	double tax_rate = .0675;
	// returns the product of meal_amount and tax_rate
	return meal_amount * tax_rate;
}
//write function code to multiply  meal_amount and tip_rate, return their product.
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}

