#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> arr{1,8,3,5,7,2};
for (int i = 0; i< arr.size(); i++)
{
    int ij = 0;
    for (int j = 0; j < arr.size()-ij; j++)
    {
        if (arr[j] > arr[j+1])
        {

           int ans = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = ans;
        }

}
ij++;
    }
    for (int i = 0; i< arr.size(); i++)
{
    cout<<arr[i];
}
}