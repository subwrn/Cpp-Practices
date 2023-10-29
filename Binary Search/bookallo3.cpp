#include<iostream>
using namespace std;
// isPossible starts here;
bool isPossible(int arr[], int size, int students, int mid)
{
 int countStudent = 1, pageSum = 0;
 for (int i = 0; i < size; i++)
{
    if (pageSum + arr[i] <= mid)
    {
        pageSum += arr[i];
    }
    else{
        countStudent ++;
        if (countStudent > students || arr[i] > mid)
        {
            return false;
        }
        pageSum = arr[i];
    }
    if (countStudent > students)
    {
        return false;
    }
}
return true;

 
}
// bookAllocation starts here;
int bookAllocation(int arr[], int size, int students)
{
    int start = 0;
    int end, ans = -1;
    for (int i = 0; i<size; i++)
    {
        end += arr[i];
    }
    while (start<= end)
    {
    int mid = start + (end - start) / 2;
    if (isPossible(arr, size, students, mid))
    {
        ans = mid;
        end= mid -1;
    }
    else{
        start  = mid + 1;
    }

        
    }
    return ans;
}

int main()
{
int arr[] ={10, 20, 30, 40};
int size = sizeof(arr) / sizeof(arr[0]);
cout<<size;
cout<<"enter maximum no of student to allocate: ";
int students;
cin>>students;
int result = bookAllocation(arr, size, students);
cout<<"the minimum maximum of the given pages are: "<<result;
}