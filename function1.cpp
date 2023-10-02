// sum of two number through function 
#include<iostream>
using namespace std;
int addition(int a, int b)
{
    return a + b;
}
int main()
{
    int x,y;
    cout<<"enter two numbers you want to add ";
    cin>>x>>y;
    int z;
    z = addition(x,y);
    cout<<"sum of two numbers are : "<<z;
    return 0;
    

}