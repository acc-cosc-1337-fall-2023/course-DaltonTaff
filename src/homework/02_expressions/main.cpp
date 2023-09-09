//write include statements
#include <iostream>
#include "hwexpressions.h"
using namespace std;


//write namespace using statement for cout

int main()
{
	//variables

	double mealamount, tiprate, total = 0;

	//getting user input

	cout<<"How much was your meal :";
	cin>>mealamount;

	cout<<"Enter desired tiprate :";
	cin>>tiprate;

	//Tax amount

	double taxamount = get_sales_tax_amount(mealamount);

	//Tip amount

	double tipamount = get_tip_amount(mealamount,tiprate);

	total = mealamount + tipamount + taxamount;

	//Output
	cout<<"Meal Amount :$"<<mealamount<<endl;
	cout<<"Sales Tax :$"<<taxamount<<endl;
	cout<<"Tip Amount :$"<<tipamount<<endl;
	cout<<"Total :$"<<total;

	return 0;
}
