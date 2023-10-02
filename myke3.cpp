#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter the length of an array: ";
    cin>>n;
    cout<<"enter thresold value:  ";
    cin>>k;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start, end;
    start = end = -1;
    int length = n+1; 
    int sum;
    for (int i = 0; i<n; i++)
    {
        sum = 0;
        for (int j = i; j <n; j++)
        {
            sum += arr[j];
            if (sum == k && j - i + 1 < length)
            {
                length = j - i + 1;
                start = i; end = j;
            }
        }
    }
    if (start != -1 && end != -1)
    {
        for (int i = start; i<=end; i++)
        {
            cout<<arr[i];
        }
    }
    return 0;
}