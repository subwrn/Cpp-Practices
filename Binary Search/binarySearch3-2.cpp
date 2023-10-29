#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {1,2,2,2,2,9,10,11};
    int key;
    cout<<"enter key";
    cin>>key;
    int first = 0;
    int last = 7;
    int firstOcc = -1;
    int lastOcc = -1;
    int mid;
    mid = first + (last - first)/2;
    while (first <= last)
    {
    mid = first + (last - first)/2;
        if (arr[mid] == key)
        {
            firstOcc = mid;
            last = mid -1;
        }
        else if (key< arr[mid])
        {
            last = mid -1;
        }
        else{
            first = mid +1;
        }
    } 
    // for another part;
    first = 0;
    last = 7;
    while (first <= last)
    {
    mid = first + (last - first)/2;
        if (arr[mid] == key)
        {
            lastOcc = mid;
            first = mid +1;
        }
        else if (key< arr[mid])
        {
            last = mid -1;
        }
        else{
            first = mid +1;
        }
    }
    if (firstOcc == -1 && lastOcc == -1)
    {
        cout<<"chor sale";
    }
    cout<<firstOcc;
    cout<<endl;
    cout<<lastOcc;
}