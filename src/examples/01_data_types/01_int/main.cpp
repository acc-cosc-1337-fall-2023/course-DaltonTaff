#include<iostream>
#include"int.h" // i have access to the echo_variable function in my library

using std::cout;
int main()
{
    int num = 5;//Declare the num variable to be of the type int(whole numbers) and we asign the value 5

    int result = echo_variable(num);

    cout<<"Result: "<<result<<"\n";
    cout<<"Num: " <<num<<"\n";

    num = 100;//asign the value of 100
    cout<<"Num:  "<<num<<"\n";
    
    return 0;
}