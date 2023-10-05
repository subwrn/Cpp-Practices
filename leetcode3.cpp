// array alternate a = [1,3,3,4,5,4]
// alternated array a = [3,1,4,3,4,5] ---- swaping 2 alternate // odd to even and even to odd
#include<iostream>
using namespace std;
int brr(int arr[], int size){
for (int i = 0; i<size; i++)
    {
   if (i%2 == 0)
   {
    int str = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = str;
   }
        cout<<arr[i];
    
    }
    
}
int main()
{
    int arr[] = {1,3,3,4,5,4};
    int crr[] = {2,3,4,5,6};
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    int crrsize = sizeof(crr) / sizeof(crr[0]);
   brr(arr , arrsize);
   cout<<endl;
   brr(crr, crrsize);
}