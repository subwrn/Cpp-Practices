#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,3,6,4,7,1};
    for (int i = 1; i<6; i++)
    {
        int curr = arr[i];
        int idx = i-1;


        // second loop


        while (idx >=0 && arr[idx] < curr)
        {
            arr[idx+1] = arr[idx];
            idx--;
        }

        arr[idx+1] = curr;
    }

    // printing the sorted array
    for (int i = 0; i<6; i++)
    {
        cout<<arr[i]<<endl;
    }
}