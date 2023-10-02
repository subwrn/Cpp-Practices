/*Factorial: Write a program to calculate the factorial of a given integer using a while loop. 
The factorial of n is the product of all positive integers less than or equal to n.*/

#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
   int number ;
   cout<<"enter any number : " ;
   cin>>number ; 
     int factorial = 1; 
   while (number>0)
   {
    
 
    factorial = factorial * number;
    number--;


   }
   cout<<factorial;
    return 0;   
}
