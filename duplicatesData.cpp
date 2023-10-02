#include<iostream>
using namespace std;
int main()
{
    int arr[7], rep[3], k= 0;
    for (int i = 0; i<7; i++)
    {
        cin>>arr[i];
    }
    int n;
    cout<<"what is your array size ? ";
    cin>>n;
    int count =0;
    for (int j = 0; j<n; j++)
    {
        for (int i = 0; i<n; i++)
        {
           if (i!=j && arr[j] == arr[i])
           {
                for (int k =i; k<n-1; k++)
                {
                    arr[k] = arr[k+1];
                    count ++;
                }
            if (i == k || j == k )
            {
                continue;
            }
            
           }
        }
        
    }
    for (int i = 0; i<count; i++)
    {
            cout<<arr[i];
    }
    return 0;
}