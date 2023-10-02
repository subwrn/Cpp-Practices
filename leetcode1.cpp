#include<iostream>
using namespace std;
int main()
{
    int  mod, num;
    int sum = 0;
    int product = 1;
    int difference;
    cout<<"enter number: ";
    cin>>num;
    while (num > 0)
    {
        mod = num % 10;
        num = (num - mod)/ 10;
        sum+=mod;
        product*=mod;
    }
    difference = product - sum;

    cout <<" the sum of digits of no is: "<<sum<<endl<<" the product of digits of no is: "<<product<<endl<<" the difference between them is: "<<difference;
    return 0;
}