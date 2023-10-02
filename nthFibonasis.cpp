// printing k no. of fibo nasis series with function fibo;
#include<iostream>
using namespace std;
void fibo(int k)
{
    int fibo = 0;
    int pre = 0;
    int curr = 1;

    for (int i = 1; i <= k; i++)
    {
        cout<<fibo;
        fibo = pre + curr;
        pre = curr;
        curr = fibo;
        
    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}