#include<iostream>
using namespace std;
int main()

{
    
    int arr[6] = {1,2,3,4,5,6};
    int i = 0, j = 0;
    while (i <6)
{
        bool notChanged = true;
j = 0;
    while (j < 6-i)
    {
        

        // bubble sort 
        // if (arr[j] > arr[j+1]) then swap(arr[j], arr[j+1]);
        if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            notChanged = false;
        }

    j++;

    }
        i++;


        // optimization 0.1
  if (notChanged)
        {
            break;
        }
      
}

for (int i = 0; i<6; i++)
{
    cout<<arr[i];
}
} 
