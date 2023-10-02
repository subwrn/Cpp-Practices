#include<iostream>
using namespace std;
int main()
{
    int arr[] = {16, 17, 3,5, 7, 2};
        int leader = arr[0];
        int lead[6];
        int a = 6;
        int b = a;
        for (int j = 0; j<a; j++){

        for(int i = 0; i<b; i++){
        if (arr[i]>= leader)
        {
            leader = arr[i];
            
        }
        }
        b--;
        leader = arr[b];
        a--;
        lead[j] = leader;
}
for (int i = 0; i<6; i++)
{
    cout<<lead[i];
}
}