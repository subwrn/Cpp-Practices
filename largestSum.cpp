#include<iostream>
using namespace std;
int main()
{
    int array[3][3] = {{1,2,3},{4,5,6},{6,4,2}};
    int largestSum = 0;
    int row;
    for (int i = 0; i<3; i++)
    {
        int currentSum = 0;
        for (int j = 0; j<3; j++)
    {
        currentSum += array[i][j];
    }
    if (currentSum > largestSum)
    {
        row = i+1;
        largestSum = currentSum;
    }
    }
    cout<<"the largest sum in 2d row is : -> "<<largestSum;
    cout<<endl<<endl<<"the imposter is : -> "<<row;
}