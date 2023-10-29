#include<iostream>
#include<algorithm>
using namespace std;
int search(int arr[], int size, int key)
{
    int start = 0; 
    int end = size - 1;
    int mid = (start + end ) /2;


    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = (start + end ) / 2;
    }
    return -1;
    
}
int main()
{
    int arr[] = {2,4,5,6,9,19,32,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    sort(arr, arr+size);
    int index = search(arr, size, key);
    cout<<index;
}