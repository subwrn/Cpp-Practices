#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 5, 7};
    int key;
    cout << "Enter key: ";
    cin >> key;
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = 0;
    int last = size - 1;
    int firstfind = -1;
    int lastfind = -1;

    // Binary search for the first occurrence
    while (first <= last)
    {
        int mid = first + (last - first) / 2;

        if (arr[mid] == key)
        {
            firstfind = mid; // Store the index of the first occurrence
            last = mid - 1; // Continue searching in the left half for the first occurrence
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    // Reset first and last for the second binary search
    first = 0;
    last = size - 1;

    // Binary search for the last occurrence
    while (first <= last)
    {
        int mid = first + (last - first) / 2;

        if (arr[mid] == key)
        {
            lastfind = mid; // Store the index of the last occurrence
            first = mid + 1; // Continue searching in the right half for the last occurrence
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    if (firstfind != -1)
    {
        cout << "First occurrence of " << key << " at index " << firstfind << endl;
        cout << "Last occurrence of " << key << " at index " << lastfind << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
