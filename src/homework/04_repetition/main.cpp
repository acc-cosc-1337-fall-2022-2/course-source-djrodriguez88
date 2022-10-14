//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::string;
using std::cout;
using std::cin;

int main() 
{
	string option;
	int quit = 0;
	int gDenom;
	
	do
	{
		std::cout<<"Please choose between the following options: \n";
		std::cout<<" 1 - Factorial \n 2 - Greatest Common Divisor \n 3 - Exit  \n";
		std::cin>>option;

		if(option == "1")
		{
			int factProduct = 0;
			int fNum;
            std::cout<<"Please enter a number to determine it's factorial.";
			std::cin>>fNum;
			factProduct = factorial(fNum);
			std::cout<<"The factorial product is "<<factProduct<<"\n";
		}
       	else if(option == "2")
		{
			int inputNum1;
			int inputNum2;
            std::cout<<"Please enter two numbers to determine their greatest common denominator.\n";
			std::cout<<"Enter the 1st number.\n";
			std::cin>>inputNum1;
			std::cout<<"Now enter the 2nd number.\n";
			std::cin>>inputNum2;
			gDenom = gcd(inputNum1, inputNum2);
			std::cout<<"The Greatest Common Denominator between "<<inputNum1<<" and "<<inputNum2<<" is "<<gDenom<<"\n";
		}
		else if(option == "3")
		{
            std::cout<<"Are you sure you want to quit? Enter 1 Exit.";
			std::cin>>quit;
		}
	}
	while(quit != 1);
	
	return 0;
}
