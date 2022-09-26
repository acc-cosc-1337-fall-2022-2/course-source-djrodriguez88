//write include statement for switch header
#include "switch.h"

using std:: string;

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
std::string menu(int option)
{
    string option_return;

    switch (option)
    {
        case 1: 
            option_return = "Option 1";
            break;
        case 2: 
            option_return = "Option 2";
            break;
        case 3: 
            option_return = "Option 3";
            break;
        case 4: 
            option_return = "Option 4";
            break;
        default:
            option_return = "Invalid Option";
    }

    return option_return;
}
