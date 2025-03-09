#include<iostream>
#include "func.h"
using namespace std;
void option1() 
{
	std::string dna;
	cout << "Enter DNA string: ";
	cin >> dna;
	cout << "Get GC Content: " << get_gc_content(dna) << "\n";
}
void option2() 
{
	std::string dna;
	cout << "Enter DNA string: ";
	cin >> dna;
	cout << "Get DNA Complement: " << get_dna_complement(dna) << "\n";
}
int main() {
    int option;
    
    do {
        cout << "MAIN MENU \n"
             << "1-Get GC Content \n"
             << "2-Get DNA Complement \n"
             << "3-Exit \n";
        cout << "Enter option: ";
        cin >> option;
        
        switch (option) {
            case 1:
                option1(); //Get DNA 
                break;
            case 2:
                option2();
                break;
            case 3:
                cout << "Are you sure you want to exit? (yes=3 no= 1 to confirm): ";
                cin >> option;
                break;
            default:
                cout << "Please enter a valid input...\n";
        }
        
    } while (option != 3);
        return 0;
}
