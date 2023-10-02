// finding factorial numbers 
#include<iostream>
using namespace std;
int fact(int num)
{
    int fact = 1;
    for (int i = 1; i<= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int ncr = fact(n)/(n * fact(n-r));
   return ncr;
    
}
int main()
{
    int a,b;
    
    cin>>a>>b;
    cout<<"the factorial is: "<<fact(a)<<"\n";
   cout<<"ncR is: " <<nCr(a,b);
return 0;
}