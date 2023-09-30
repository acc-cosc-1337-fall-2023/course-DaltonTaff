//add include statements
#include <iostream>

#include "func.h"

using std::string;

//add function code here

double get_gc_content(const string& dna)
{
    double gc_content = 0;

    for (int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'C' || dna[i] == 'G')
        gc_content++;
    }
    return gc_content/dna.length();
}

string reverse_string(string dna)
{
    string reverse = "";
    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reverse += dna[i];
    }
    return reverse;
}

std::string get_dna_complement (std::string dna)
{
    std::string complement = reverse_string(dna);
    for (int i = 0; i < complement.length(); i++)
    {
        if (complement[i] == 'A')
            complement[i] = 'T';
        else if (complement[i] == 'T')
            complement[i] = 'A';
        else if (complement[i] == 'G')
            complement[i] = 'C';
        else if (complement[i] == 'C')
            complement[i] = 'G';

    }
    
    return complement;

}

