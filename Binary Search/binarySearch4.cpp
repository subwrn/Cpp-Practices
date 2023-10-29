// total no of occurance of a same element in an array : BinarySearch
#include<iostream>
using namespace std;
int main()
{
    int key;
    cout<<"enter a keY";
    cin>>key;
    int arr[9] = {1,1,1,1,1,3,4,5,6};
    int start = 0;
    int end = 8;
    int count = 0;
    int mid = start + (end -start )/2;
    while (start<=end)
    {
        int mid = start + (end - start) / 2; 
        if (key == arr[mid]){
            count ++;
            start = mid +1;
        }
        else if (arr[mid]> key)
        {
            end = mid -1;
        }
        else{
            start = mid +1;
        }
        
    }
    start = 0;
    end = 8;
    while (start<=end)
    {
        int mid = start + (end - start) / 2; 
        if (key == arr[mid]){
            count ++;
            end = mid -1;
        }
        else if (arr[mid]> key)
        {
            end = mid -1;
        }
        else{
            start = mid +1;
        }
        
    }
  cout<<"the number of repetation in an array of given element is :"<<count;

}