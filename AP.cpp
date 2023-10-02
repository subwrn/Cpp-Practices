// function to print the AP of nth term of F(x) = 3z + 7;
#include<iostream>
using namespace std;
int apt(int z)
{
    return 3*z + 7;
}
int main()
{
    int n;
    cout<<"give me nth term: ";
    cin>>n;
   
    cout<<apt(n);

return 0;
}