#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,5,8,9,4};
    for (int i = 0; i< 6; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    // printing
    for (int i = 0; i<6; i++)
    {
        cout<<arr[i];
    }
}