#include "expressions.h"
#include <iostream>

using std::cout;


int main()
{
    auto num = operator_precedence_1(12,6,3);
    cout<<"Walue 1: "<<num<<"\n";

    num = operator_precedence_2(12,6,3);
    cout<<"Walue 2: "<<num<<"\n";


    return 0;
}