// counting the number of binary set bits and printing ex: 2 = 10 & 3 = 11 total 1 in the bin digits are 3 so output is 3;
#include<iostream>
using namespace std;
int bits(int a)
{
    int count = 0;
    while (a>0)
    {
        if (a&1)
        {
            count ++;
        }
            a>>=1;

    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<bits(a) + bits(b);
    return 0;
    
}