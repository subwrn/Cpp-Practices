#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"give length of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"please enter thresold value: k: ";
    cin>>k;
    int start, end;
    start = -1;
    end = -1;
    int sum;
    int length = 0;
    for (int i = 0; i<n ; i++)
    {
        sum = 0;
        for (int j = i; j<n; j++)
        {
            sum += arr[j];
    if (sum == k && j -i +1 > length)
    {
        length = j - i +1;
        start = i; 
        end = j; 
    }
        }
    }
    if (start != -1 && end != -1)
    {
        for (int i = start; i<= end; i++)
        {
            cout<<arr[i];
        }
    }
    else {
        cout<<"no such sub array found " ;
    }
}