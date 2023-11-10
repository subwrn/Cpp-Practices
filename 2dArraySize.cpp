// finding the size of 2d array 


#include<iostream>
using namespace std;
int main()
{

    int array[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};

    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }

int size;
    cout<<"the size of 2d array is : "<<size;
    return 0;
}