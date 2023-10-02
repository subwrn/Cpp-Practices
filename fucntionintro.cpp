// introduction of function #revision
#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int pow = 1;
    for (int i = 1; i<= b; i++)
{
   pow = pow * a;
}
cout<<pow;
   
}
int main()
{
    int a,b;
    cin>>a>>b;
    pow(a,b);
    return 0;
}