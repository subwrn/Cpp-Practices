#include<iostream>
using namespace std;
int main()
{
    int arr[] = {9,3,3,5,4,5,4};
    int ans=0;
    int arrSize= sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++)
{
    ans = ans ^ arr[i];
}
cout<<ans;
}