#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int a = rand() % 3;
 
    char b;i
    cout<<"rock paper czer\n";
    cin>>b;
    if (a== 0)
    {
        cout<<"rock";
    }
    else if (a==1)
    {
        cout<<"paper";
    }
    else{
        cout<<"Czer";
    }
    
    return 0;
        
}
