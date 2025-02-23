//write include statements
#include<iostream>
#include "decisions.h"
using namespace std;
void option1() 
{
	int grade;
	cout << "Enter grade: ";
	cin >> grade;
	cout << "Letter grade (using if): " << get_letter_grade_using_if(grade) << "\n";
}
void option2() 
{
	int grade;
	cout << "Enter grade: ";
	cin >> grade;
	cout << "Letter grade (using switch): " << get_letter_grade_using_switch(grade) << "\n";
}
int main()
{
	int option, grade;
	char testscore;

    cout << "MAIN MENU \n "
         << "1-Letter grade using if \n"
         << "2-Letter grade using switch \n"
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
            cout << "Exiting...\n";
            break;
        default:
            cout << "Please enter a number between 0 and 100.\n";
	}
	return 0;
}
