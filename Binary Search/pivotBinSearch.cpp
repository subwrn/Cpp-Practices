#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {4,5,7,1,2,3};
    int start = 0;
    int end = 5;
    int pivot = -1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) /2;
        if (arr[mid] < arr[0] && arr[mid] < arr[mid-1])
        {
           pivot = mid;
           break;
        }
       else if(arr[mid] >= arr[0])
       {
        start = mid+1;
       }
        else{
            end = mid-1;
        }
    }
    

cout<<pivot;
}