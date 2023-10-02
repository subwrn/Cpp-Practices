/*Sum of Digits: Write a program to take an integer as input and calculate the sum of its digits.
Repeat this process until the sum becomes a single-digit number, and then print the final result.*/
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0 , modifier;
    cout<<"enter a number : ";
    cin>>num;
    while (num>0)                           // run loop while num is greater than 0 
    {
        modifier = num % 10; 
        num = (num - modifier )/10;
        sum = sum + modifier;
        if ( sum >9 && num == 0)            // run if the sum of given number is two digit number 
        {
            num = sum;
            sum = 0;
        }
    }
    cout<<sum;
    return 0;
}