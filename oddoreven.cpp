// using function isEven in boolean using function;
#include<iostream>
using namespace std;
bool isEven(int a)
{
    if (a&1){
        return 0;
    }
    else{
       return 1;
    }
}
int main()
{
     int a;
     cout<<"enter a number: ";
     cin>>a;
     if (isEven(a))
{
    cout<<a<<"the number is even: ";

}
else{
    cout<<a<<"the number is odd: ";
}
return 0;
}