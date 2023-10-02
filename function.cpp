#include<iostream>
using namespace std;
int fact(int a)
{
    int fact = 1;
    for (int i = 1; i<=a; i++)
    {
        fact*=i;
    }
    return fact;
}
using namespace std;

int main()
{

   cout<<"enter a number ";
   int b;
   cin>>b;
    cout<<fact(b);
    
    return 0;

}