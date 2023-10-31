/*
    Time complexity: O(N^2)
    Space complexity: O(1)
    
    Where 'N' is the size of the array.
*/

#include<iostream>
using namespace std;
int main()
{

    int n = 6;
    int arr[] = {2,3,5,8,9,4};
    // To traverse all the elements.
    for(int i = 1; i < n; ++i) {
        
        // To store the current element.
        int curr = arr[i];
        
        // To traverse previous elements.    
        int idx = i - 1;
        
        while(idx >= 0 && arr[idx] > curr) {
            
            // Change elements position.
            arr[idx+1] = arr[idx];
            
            idx--;
        
        }
        
        // Change current element.
        arr[idx+1] = curr;
    }
    for (int i = 0; i<6; i++)
    {
        cout<<arr[i];
    }
}
