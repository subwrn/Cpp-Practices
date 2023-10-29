#include<iostream>
using namespace std;
int main()
{
    int key;
    cout<<"enter key";
    cin>>key;
   int arr[8] = {1,2,2,2,2,9,10,11};
    int first = 0; 
    int last = 7;
    int firstOcc =-1;
    int lastOcc =-1;
    int mid = (first + last) /2;
    while (first <= last)
    {
        mid = first + (last - first) /2;
        if (arr[mid] == key)
        {
            firstOcc = mid;
            last = mid -1;
        }
        if (key> arr[mid])
        {
            first = mid +1;
        }
        else{
            last = mid -1;
        }
    }
// Reset first and last for the second binary search
    first = 0;
    last = 7;
    //  while (first <= last)
    // {
    //     mid = first + (last - first)/2;
    //     if (key == arr[mid]){
    //         lastOcc = mid;
    //         first = mid +1;
    //     }
    //     if (key> arr[mid])
    //     {
    //         first = mid +1;
    //     }
    //     else{
    //         last = mid -1;
    //     }
    // }
    while (first <= last)
{
    mid = first + (last - first) / 2;
    if (key == arr[mid]) {
        lastOcc = mid;
        first = mid + 1;
    }
    else if (key > arr[mid]) {
        first = mid + 1;
    }
    else {
        last = mid - 1;
    }
}

    if (firstOcc == -1 && lastOcc == -1)
    {
        cout<<"vak Sale";
    }
    cout<<firstOcc<<lastOcc;
}