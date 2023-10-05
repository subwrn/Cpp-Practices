#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,4,6,4,1};
    int unique;
        for (int i = 0; i<5; i++)
    {
        for (int j = 0; j<5; j++)
    {
        if (arr[i] == arr[j] & i != j)
        {
            continue;
        }
    else if(arr[i] != arr[j] && j == 4){
        cout<<arr[i];
    }
        // if (i != j && arr[i] !=arr[j] && i + j == 8)
        // {
        //     cout<<arr[i];
        // }
    }
    }
    
}