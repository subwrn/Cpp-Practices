#include<iostream>
using namespace std;

bool present(int arr[][3], int target)
{

        for (int i = 0; i<3; i++)
{
    for (int j = 0; j<3; j++)
{
    if (target == arr[i][j])
    {
        return true;
    }

}
}
return false;

}
// main starts here;
int main()
{
     int array[3][3] = {{1,2,3},{2,3,4},{3,4,5}};
     cout<<"whichc element r u searching in the array -> ";
     int target;
     cin>>target;
     for (int i = 0; i<3; i++)
{
    for (int j = 0; j<3; j++)
{
    cout<<array[i][j]<<"\t";

}
cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<endl;
if (present(array, target))
{
    cout<<"found successfully ";

}
else{
    cout<<"sorry! better luck next time ";
}
}