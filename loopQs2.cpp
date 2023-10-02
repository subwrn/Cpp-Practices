/*Prime Numbers in a Range: Write a program to print all prime numbers between a given range (start and end).
 Use a for loop to iterate through the range and check for prime numbers.*/


#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int startNo, endNo;
    cout<<"enter starting and ending range : ";
    cin>>startNo>>endNo;
        for (int i = startNo; i<= endNo; i++)
        {
    bool isPrime = true;
             if (i<=1)
             {
                isPrime = false;
            
             }
             else{
                for (int j = 2; j <= sqrt(i); j ++)
                {
                    if (i%j == 0)
                    {
                         isPrime= false;
                         break;
                    }
                    
                    
                }
             if (isPrime)
             {
                cout<<i<<endl;
             }
             }
}
}