//write include statements
#include<iostream>
#include "decisions.h"

using std::string;
using std::cout;
using std::cin;

int main() 
{
	string option;
	std::cout<<"Please choose between the following options: \n";
	std::cout<<" 1 - Letter grade using if \n 2 - Letter grade using switch \n 3 - Exit  \n";
	std::cin>>option;

	if(option == "1")
	{
		auto input_grade = 0;
		
		std::cout<<"Please enter a grade from 0-100\n";
		std::cin>>input_grade;
		if (input_grade < 0 || input_grade >100)
		{
			std::cout<<"The grade entered is not valid\n";
		}

		string student_grade;
		student_grade = get_letter_grade_using_if(input_grade);

		cout<<"The student received an: "<<student_grade<<"\n";
	}
	else if(option == "2")
	{
		auto input_grade = 0;
		
		std::cout<<"Please enter a grade from 0-100\n";
		std::cin>>input_grade;
		if (input_grade < 0 || input_grade >100)
		{
			std::cout<<"The grade entered is not valid\n";
		}

		string student_grade;
		student_grade = get_letter_grade_using_switch(input_grade);

		cout<<"The student received an: "<<student_grade<<"\n";

	}
	else if(option == "3")
	{
		std::cout<<"Closing program..\n";
	}

	return 0;
}