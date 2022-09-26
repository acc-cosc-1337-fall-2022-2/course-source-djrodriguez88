//write include statement for decisions header
#include "decisions.h"

using std:: string;
//Write code for function(s) code here

std::string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if(grade <= 100 && grade >= 90)
    {
        letter_grade = "A";
    }
    else if (grade <= 89 && grade > 79)
    {
        letter_grade = "B";
    }
    else if (grade <= 79 && grade > 69)
    {
        letter_grade = "C";
    }
    else if (grade <= 69 && grade > 59)
    {
        letter_grade = "D";
    }
    else if (grade <= 59)
    {
        letter_grade = "F";
    }

    return letter_grade;
}



std::string get_letter_grade_using_switch(int grade)
{
    string grade_return;

    switch (grade)
    {
        case 0 ... 59 : 
            grade_return = "F";
            break;
        case 60 ... 69: 
            grade_return = "D";
            break;
        case 70 ... 79: 
            grade_return = "C";
            break;
        case 80 ... 89: 
            grade_return = "B";
            break;
        case 90 ... 100: 
            grade_return = "A";
            break;
    }

    return grade_return;
}