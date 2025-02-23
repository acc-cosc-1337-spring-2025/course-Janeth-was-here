// In file src/homework/03_decisions/decisions.cpp write code for functions get_letter_grade_using_if and
// get_letter_grade_using_switch (see Functions specification table). 

//write include statement for decisions header
#include "decisions.h"
using namespace std;
#include <iostream>
//Write code for function(s) code here
char get_letter_grade_using_if(int grade)
{
    if (grade > 100 || grade < 0) 
    {
        cout << "Please enter a number between 0 and 100.\n";
        return '?';
    }
    char testscore;
    if ((grade >= 90) && (grade <= 100))
    {
    return testscore = 'A';
    }
    else if ((grade > 80) && (grade <= 89))
    {
    return testscore = 'B';
    } 
    else if ((grade > 70) && (grade <= 79))
    {
    return testscore = 'C';
    } 
    else if ((grade > 60) && (grade <= 69))
    {
    return testscore = 'D';
    }    
    else if ((grade > 00) && (grade <= 59))
    {
    return testscore = 'F';
    }
}

char get_letter_grade_using_switch(int grade) 
{
    if (grade > 100 || grade < 0) 
    {
        cout << "Please enter a number between 0 and 100.\n";
        return '?';
    }
    switch (grade / 10) 
    {
        case 10: // 100
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            return 'F';
    }
}

