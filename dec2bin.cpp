#include<iostream>
using namespace std;
int main()
{
    int dec;
    int store = 0;
    int bin;
    while (dec > 0)
    {
        int mod = dec % 2;
        store = store * 10 + mod;
        dec = dec / 2;
    }
    cout<<store;
}