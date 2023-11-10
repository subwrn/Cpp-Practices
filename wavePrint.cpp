#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3}, {2,3,4},{3,4,5}};
    
    for (int col = 0; col<3; col++)
    {
        if (col & 1)
        {
            for(int row = 2; row >= 0; row --)
            {
                cout<<arr[row][col]<<" \t ";
            }
            cout<<endl;
        }

    else{
        for (int row = 0; row<3; row ++)
        {
            cout<<arr[row][col]<<" \t ";
        }
        cout<<endl;
    }
}}