#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "what is the year you want to check either its leap of not ! only type year";
    cin >> year;
    int leap ;
    leap = year % 4;
    if(leap==0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"its not leap year";

    }
    return 0;
}