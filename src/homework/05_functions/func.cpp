//add include statements
#include<iostream>
#include"func.h"
//add function code here
double get_gc_content(const std::string& dna) {
    int count = 0; //Declares integer variable to store the number of G and C
    for (char c : dna)  //Uses a range for loop to iterate over each character C in the dna string.
    {
        if (c == 'G' || c == 'C') count++; //Checks if the character is G or C
        //If true, start count by 1.
    }
    //Check if the string is empty. If true returns 0 to prevent division by zero. Converts count to double to ensure decimal division.
    return (dna.empty()) ? 0.0 : (static_cast<double>(count) / dna.length());
}

std::string get_reverse_string(std::string dna) 
{
    std::string reversed = "";  // Initialize an empty string to store the reversed sequence

    for (int i = dna.length() - 1; i >= 0; i--) 
    {  
        reversed += dna[i];  // Append each character from the end of 'dna' to 'reversed'
    }

    return reversed;  // Return the reversed string
}

std::string get_dna_complement(std::string dna)
{
    std::string reversed = get_reverse_string(dna);
    for (char& c : reversed) 
    {
        c = (c == 'A') ? 'T' : (c == 'T') ? 'A' : (c == 'C') ? 'G' : 'C';
    }
    return reversed;
}

