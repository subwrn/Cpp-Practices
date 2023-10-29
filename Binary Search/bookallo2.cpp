#include<iostream>
using namespace std;
        bool isPossible(int n, int m, int mid, int arr[])
        {
            int StudentCount = 1;
            int Sum = 0;
            for (int i = 0; i<n; i++)
            {
                if (Sum +arr[i] <= mid)
                {
                    Sum += arr[i];
                }
                else{
                    StudentCount ++;
                    if (StudentCount > m || arr[i] > mid)
                    {
                        return false;

                    }
                    Sum = arr[i];
                }
                if (StudentCount > m)
                {
                    return false;
                }
        }
return true;
            }
        


// Allocation of books is here in this function starts here;

int allbooks(int arr[], int n, int m)
{
        int sum = 0, start = 0;

        for (int i = 0; i<n; i++)
        {
            sum += arr[i];
        }


        // binary searching starts here

        int end = sum;
        int ans = -1;

         while (start<= end)
         {
            int mid = start + (end - start) / 2;

            if (isPossible(n, m, mid, arr))
            {
                ans = mid;
                end = mid -1;
            }
            else{
               start = mid+1;
            }}
            return ans;
}


// main function / changing anything is probhited you might even go to jail
int main()
{
    int m = 2;
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = allbooks(arr, n, m);
    if (result == -1)
    {
        cout<<"no result found";
    }
    else{
        cout<<"So, the maximum minimum of the function is: "<<result;
    }
}