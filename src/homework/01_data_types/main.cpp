//write include statements
#include<iostream>
#include"data_types.h"

using std::cout;
using std::cin;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;

	cout<<"Enter a number.";
	cin>>num;

	int result = multiply_numbers(num);
	
	
	cout<<"The result is: "<<result<<"\n";
	

	int num1 = 4;
	result = multiply_numbers(num1);

	
	cout<<"The result is: "<<result<<"\n";
	return result;
}
