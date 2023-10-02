#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of slab i.e arrray length: ";
    cin>>n;
    int rain[n];
    for (int i = 0; i<n; i++)
{
    cin>>rain[i];
}
int leftCount = 0;
int rightCount = 0;
    int left[leftCount];
    int right[rightCount];
    for (int i = 0; i<n; i++)
    {
        for (int j = i; j<n; j++)
    {
        if (rain[i] < rain[j])
        {
            left[leftCount] = rain [j];
            leftCount++;

            }
            else{
                leftCount = rain[i];
                leftCount++;
            }
    }
    }
}