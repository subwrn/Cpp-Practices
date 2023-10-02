#include<iostream>
using namespace std;
int main()
{
    int num, ant;
    cin>>num;
    int save = 0;
    int op=0;
    int sve = 0;
    while (num> 0)
    {
        ant = num & 1;
        num = num /2;
        op = num>>1;
        save = 10 * save + ant;
        sve = sve * 10 + op;
    }
    cout<<save<<endl;
    cout<<sve;
    return 0;
}