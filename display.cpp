#include<iostream>
using namespace std;
int main()
{

    int store[5];
    for (int i = 0; i<5; i++)
{
    cin>>store[i];
    if (i==0)
    {
        continue;
    }
    else 
        {
            if (store[i]<store[i-1])
            {
                int ram = store[i-1];
                store[i-1] = store [i];
                store[i] = ram;
            }
            else{
                continue;
            }
    }
}
for (int i = 0; i<5; i++)
{
    cout<<store[i];
}
}