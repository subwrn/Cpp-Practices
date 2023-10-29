#include<iostream>
using namespace std;

bool possible(int arr[], int size, int painters, int mid)
{
     int counter = 1;
     int sum = 0;
     for (int i = 0; i < size; i++)
     {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else{
            counter ++;
            if (counter > painters || arr[i] > mid)
            {
                return false;
            }
        }
     }
     return true;
}

int program(int arr[], int size, int painters)
{   
    int counter = 1;
    int start = 0;
    int end = 0;
    for (int i = 0; i< size; i++)
    {
        end += arr[i];
    }
int ans = -1;

    while (start<= end)
    {
    int mid = start + (end - start) /2;
        if (possible(arr, size, painters, mid))
        {
            ans = mid;
            end = mid -1;
        }
        else{
            
            start = mid +1;
            
        }
    }
    return ans;
    

}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int painters;
    cout<<"enter painters ";
    cin>>painters;
    int result = program(arr, size, painters);
    cout<<result;
}