#include<iostream>
using namespace std;
int main()
{ 
    int dec;
    cin>>dec;
    int m = dec;
    int store = 0;
    int bin;
    while (dec != 0)
    {
        store = (store << 1 ) | 1;
        dec = dec>>1;
    }
    bin = (~m) & store;
    cout<<bin;
}