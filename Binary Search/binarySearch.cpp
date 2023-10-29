#include <iostream>
#include <algorithm>
using namespace std;
int search(int arr1[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= key)
    {

        if (arr1[mid] == key)
        {
            return mid;
        }

        if (arr1[mid] > key)
        {
            end = mid - 1;
        }
        else
            {
                start = mid + 1;
            }
        mid = (start + end )/2;
    }
    return -1;
}
int main()
{
    int key;
    cout << "please enter key: ";
    cin >> key;
    int arr1[] = {1,2,4,8,9, 12};
    
    int index = search(arr1, 6, key);
    cout<<index;
}