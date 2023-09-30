#include <iostream>
#include "func.h"

using namespace std;
using std::string;
using std::cin;
using std::cout;

int main() 
{
	int option = 0;
	cout <<"1- Get GC Content.\n";
	cout <<"2- Get DNA Complement.\n";
	cout <<"3- Exit.\n";
	cin >> option;

	if (option == 1)
	{
		string gc;
	cout << "Input data to recive GC content. ";
	cin >> gc;

	double result = get_gc_content(gc);
	cout << result << endl;
	}

	

	else if (option == 2)
	{
		string complement;
		cout << "Please enter data for complement. ";
		cin >> complement;

		string result = get_dna_complement(complement);
		cout << result << endl;
	}

	else
	{
		cout<<"Exiting. " << endl;
	}
	
	return 0;
}