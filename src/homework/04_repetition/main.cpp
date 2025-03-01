//write include statements
#include<iostream>
#include "repetition.h"
using namespace std;
//write using statements
void option1() 
{
	int num;
	cout << "number: ";
	cin >> num;
	cout << "Using factorial function: " << factorial(num) << "\n";
}
void option2() 
{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Using gcd function: " << gcd(num1,num2) << "\n";
}
int main() {
    int option;
    
    do {
        cout << "MAIN MENU \n"
             << "1-Factorial \n"
             << "2-Greatest Common Divisor \n"
             << "3-Exit \n";
        cout << "Enter option: ";
        cin >> option;
        
        switch (option) {
            case 1:
                option1();
                break;
            case 2:
                option2();
                break;
            case 3:
                cout << "Are you sure you want to exit? (yes=3 no= 1 to confirm): ";
                cin >> option;
                break;
            default:
                cout << "Please enter a valid number...\n";
        }
        
    } while (option != 3);
        return 0;
}