// Question : Write a C++ function that takes a vector of books pages and a number of students as input and returns the minimum number of pages each student must read.
// Use binary search to find the optimal allocation.
#include <iostream>
#include <vector>
using namespace std;
int possible(vector<int>&arr, int size, int students, int mid)
{
    int stdcount = 1;
    int page = 0;
    for (int i = 0; i<size; i++)
    {
        if (page + arr[i] <= mid)
        {
                page += arr[i];
        }
        else{
            stdcount++;
            if (stdcount > students || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}
int allocateBook(vector<int> &arr, int size, int students)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    while (start <= sum)
    {
        int mid = start + (sum - start) /2;
        if (possible(arr, size, students, mid))
        {
            ans = mid;
            sum = mid -1;
        }
        else{
            start = mid + 1;
        }

    }
    return ans;
}

int main()
{
    vector<int> arr;
    for (int i = 0; i < 4; i++)
    {
        int inputs;
        cin >> inputs;
        arr.push_back(inputs);
    }

    int students;
    cout << "enter the students name: ";
    cin >> students;
    int size = arr.size();
    int result = allocateBook(arr, size, students);
    cout << result;
}