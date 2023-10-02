#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the size of array: ";
    cin>>a;
    int arr[a];
    for (int i = 0; i<a; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the target: "; 
    int k, start = -1, end = -1;
    cin>>k;
    for (int i = 0; i< a; i++)
    {
        int sum = 0; 
        for (int j = 0; j<i; j++)
        {
            sum += arr[j] ;
            if (sum == k)
            {
                start = i;
                end = j;
        for (int l = start; l<= end; l++)
        {
            cout<<arr[l];
        }
        cout<<endl;
            }

        }
    }
    return 0;

}