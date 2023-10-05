#include<iostream>
using namespace std;
void pri(int arr[], int size)
{
    for (int i = 0; i<size; i++){
        cout<<arr[i];
    }
}
void swa(int arr[], int size)
{
    for (int i = 0; i<size -1; i++)
    {
        if (i % 2 == 0)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}
int main()
{
    int arr[] ={3,5,3,6,9,7,1};

    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    swa(arr, size);
        pri(arr, size);
}