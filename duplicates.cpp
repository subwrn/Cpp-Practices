#include<iostream>
using namespace std;
int main()
{
    int s =0;
    int del[5], i;
    for (i = 0; i<5-s; i++)
    {
        cin>>del[i];
        for (int j = 0; j<i; j++)
        {
            if (del[i] == del[j])
            {
                i--;
                s++;
            }
        }
    }
    for (int i =0 ;i<5-s; i++)
    {
        cout<<del[i];
    }
}