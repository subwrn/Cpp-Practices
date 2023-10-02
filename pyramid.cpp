#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"how many line do you want to print: ";
    cin>>n;
    k = n;
    for (int i = 0; i<= n; i++)
    {
        for (int j = 0; j<= n; j++)
        {

            if (j>=k)
            {
                cout<<"* ";
                
            }
            else{
                cout<<" ";
            }
        }
k--;
cout<<endl;
        
    }
    return 0;
}