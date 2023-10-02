//checking if a number is prime or not using function
#include<iostream>
using namespace std;
bool isPrime(int a)
{
    for (int i = 2; i<= 9; i++)
    {
        if (a % i == 0 && a != i)
        {
            return false;
        }
    }
    return true;
}
int main()
{

int b;
cin>>b;
if (isPrime(b))
{
cout<<"The number is prime; ";
}
else {
    cout<<"the number is not prime: ";
}
return 0;
}