#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"what is the length of an array ? ";
    cin>>n;
    int arr[n];
    cout<<"enter the number of times to rotate";
    cin>>r;
    for (int i = 0; i<n; i++)
{
    cin>>arr[i];
}
int ram; // storer;
int count = n-1;
for (int i = 0; i<r; i++)
{
    ram = arr[i];
    arr[i] = arr[count];
    arr[count] = ram;
    count --;

}
cout<<"the array is rotated and the result is : ";
for (int i = 0; i<n; i++)
{
    cout<<arr[i];
}
}