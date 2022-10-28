#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> numbers;//create an empty list
    cout<<"Capacity: " <<numbers.capacity()<<"\n";
    cout<<"Size: " <<numbers.size()<<"\n";

    numbers.push_back(4);//add an int value of 4
    cout<<"Capacity: " <<numbers.capacity()<<"\n";
    cout<<"Size: " <<numbers.size()<<"\n";

    numbers.push_back(10);//add an int value of 10
    cout<<"Capacity: " <<numbers.capacity()<<"\n";
    cout<<"Size: " <<numbers.size()<<"\n";


    for(auto n: numbers)
    {
        cout<<n<<"\n";
    }

    cout<<"\n";

    vector<int> numbers1(10, 1);
    for(auto n: numbers1)
    {
        cout<<n<<"\n";
    }

    return 0;
}