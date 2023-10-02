// Printing the size of an datatypes 
#include<iostream>
using namespace std;
int main ()
{
    int integer;
    float floating;
    double doubleD;
    bool boolean;
    long int longInteger;
    cin>>integer;
    cin>>floating;
    cin>>doubleD;
    cin>>boolean;
    cin>>longInteger;
    
    cout<<sizeof(integer)<<endl;
    cout<<sizeof(floating)<<endl;
    cout<<sizeof(doubleD)<<endl;
    cout<<sizeof(boolean)<<endl;
    cout<<sizeof(longInteger)<<endl;
    return 0;
}