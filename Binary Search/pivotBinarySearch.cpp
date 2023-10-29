#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {4,5,6,7,9,1,3};
    
    int start = 0;
    int end = 6;
    int mid = start + (end - start )/2;
    int pivot = -1;
    while (start<= end)
    {
        if (arr[mid] < arr[mid-1])
        {
            pivot = mid;
            break;
        }
        start = mid +1;
        mid = start + (end - start) / 2;
        
    }
    while (start<= end)
    {
        if (arr[mid] < arr[mid-1])
        {
            pivot = mid;
            break;
        }
        end = mid - 1;
        mid = start + (end - start) / 2;
        
    }
cout<<arr[pivot];
}