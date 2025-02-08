//write include statements
#include "hwexpressions.h"
#include<iostream>

//write namespace using statement for cout
using namespace std;
int main()
{
	//In the main function, write code to use the functions get_sales_tax_amount and get_tip_amount.
	//Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

    // Get meal amount from user
    cout << "Enter meal amount: ";
	//Use the cin object to capture the number from the keyboard, assign the number to meal_amount
    cin >> meal_amount;

    // Calculate sales tax
	//Call the get_sales_tax_amount with meal_amount as its parameter, 
    //assign the return value of the function get_sales_tax_amount to the tax_amount variable
    tax_amount = get_sales_tax_amount(meal_amount);

    // Get tip rate from user, Capture the tip rate from keyboard
    cout << "Enter tip rate (0.15 for 15%): ";
	// and assign the value to tip_rate variable
    cin >> tip_rate;
	// Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
    //set function get_tip_amount return value to tip_amount
    tip_amount = get_tip_amount(meal_amount, tip_rate);
	// Add tip_amount, tax_amount and meal_amount , and save result to total variable
    // Calculate total
    total = meal_amount + tax_amount + tip_amount;
	//Display receipt
	cout<< "Meal amount: "<< meal_amount << endl;
	cout<< "Sales Tax: "<< tax_amount << endl;
	cout<< "Tip Amount: "<< tip_amount << endl;
	cout<< "Total: "<< total << endl;

	return 0;
}
