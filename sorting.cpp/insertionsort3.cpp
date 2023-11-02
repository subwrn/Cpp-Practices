#include<iostream>
using namespace  std;
int main()
{
        int arr[] = {2,3,24,54,3,5,4,45,4,3,45,4};
        int size = sizeof(arr) / sizeof(arr[0]);


        // real coding starts here

        for (int i = 0; i<size; i++)
{
    int current = arr[i];
    

    int index = i -1;




    // second loop starts herre core program starts:


    while (index >= 0 && arr[index] > current)
{
    arr[index + 1] = arr[index];
    index--;
}


arr[index + 1] = current;
}




// printing the program // sorted algo

for (int i = 0; i< size; i++)
{
    cout<<arr[i]<<"  ";
}
} // namespace  std;

