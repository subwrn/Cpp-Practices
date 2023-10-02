#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "please enter the data for the array length ";
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    cout << "\nenter the data you want to delete";
    cin >> x;
    int s; 
    for (int i= 0; i<5; i++)
    {
        if (x == arr[i])
        {
            arr[i] = arr[i+1];
            s = i;
            break;
        }
    }
    for (int i = s+1; i<4 ; i++)
    {
        
        arr[i] = arr[i+1];
    }
    for (int i = 0; i<4; i++)
{
    cout<<arr[i];
}
}