/*Pattern Printing: Write a program to print the following pattern using nested loops:


1
2 3
4 5 6
7 8 9 10*/

#include<iostream>
using namespace std;
int main ()
{
    int k = 1;
    for (int i = 1; i<=4; i++)
    {
        for ( int j = i; j > 0; j--)
         {
            cout<<k;
            k++;
           
         }
            cout<<endl;
    }
    return 0;
}