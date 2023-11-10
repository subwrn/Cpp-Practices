#include<iostream>
using namespace std;
int main()
{
        int array[3][3];

        for (int i = 0; i<3; i++)
    {
            for (int j = 0; j<3; j++)
    {
        cin>>array[i][j];
    }
    }

     for (int i = 0; i<3; i++)
    {
            for (int j = 0; j<3; j++)
    {
        cout<<array[i][j];
    }
    }



    // sprial printing 

    int row = 2;
    int col = 0;
    int limit = -1;

   for (int row = 0; row < 3; row ++)
{
  if (col < 3)
  {
    for (int col = 0; col <3; col ++)
    {
        cout<<array[row][col]<<"\t";
    }
    cout<<endl;
  }
  if (col == 3)
  {
    
  }
}
}