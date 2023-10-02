// wap to create an array which removes all redundant data inserted;
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i= 0; i<5; i++)
    {
        cin>>arr[i];
    }
    int str;
    for (int i =0; i<5; i++)
    {
        for (int j = 0; j<5; i++)
        {
            if (arr[i] == arr[j] && (!(i==j)))
            {
                arr[i] = arr[j+1];
                
            }
        }
    }
    for (int i = 0; i<4; i++)
    {
        cout<<arr[i];
    }
}