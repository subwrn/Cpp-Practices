#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {1,2,3,4,0,-1};
    


    // bubble sorting 
    // if (arr[j] < arr[j+1] then swap(arr[j], arr[j+1]));



    for (int i = 0; i<5; i++)
{
    bool changed = true;
    for (int j = 0; j<6 - i -1; j++)
    {

        if (arr[j] > arr[j+1])
    {

        swap(arr[j], arr[j+1]);
        bool changed = false;
    }



    
    }

        if (changed == false)
{
    break;
}

// if (noChange)
// {
//     break;
// }
}


        // printing sorted array 



        for (int i = 0; i<6; i++)
{
        cout<<arr[i]<<"  ";

}
}