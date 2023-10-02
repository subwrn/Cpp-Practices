// Assignment operators in cpp
#include<iostream>
using namespace std;
int main ()
{
    int a = 5, b = 8;
    a += b;  // adds the value stored in a and b and saves in a;
    b -= a; // minus / subtact the value of b with the new value of a and stores in b;
    cout<<a<<endl<<b;
    return 0;
}