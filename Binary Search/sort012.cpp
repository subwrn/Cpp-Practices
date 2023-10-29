#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,2,1,2,32,3,2};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+size);
    for (int i = 0; i<size; i++)
    {
        cout<<arr[i];
    }
    return 0;

}