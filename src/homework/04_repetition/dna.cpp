//add include statements
#include "dna.h"

//add function(s) code here

  

int factorial(int num)
{
     int factProduct = 1;

    while (num > 0)
    {
        factProduct = (factProduct)*(num);
        num--;
    }
    return factProduct;
}

int gcd(int num1, int num2)
{
        int num3;
        while(num1 != num2)
        {
            if (num1 < num2)
            {
                num3 = num1;
                num1 = num2;
                num2 = num3;
            }
            if (num1 > num2)
            {
                num1 = num1 - num2;
            }
        }
    return num1;
}