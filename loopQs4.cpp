/*Reverse a Number: Write a program to reverse a given integer using a while loop. For example, 
if the input is 12345, the output should be 54321.*/


#include<iostream>
using namespace std;
int main ()
{

    int reverse =0 , number, moder;
        cout<<"enter any number you wish to find reverse of its number : " ;
        cin>>number ;

    while (number > 0 )
    {
         moder = number % 10;
         reverse = (reverse * 10) + moder;
         number = (number - moder )/ 10;
    }
    cout<<reverse;
    return 0;
}