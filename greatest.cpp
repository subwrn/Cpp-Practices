#include<iostream>
using namespace std;
int main ()
{
    int number[5];
    for (int i = 0; i<5 ; i ++)
    {
        cin>>number[i];
    }
    for (int j = 0; j<5; j++)
    {
        for (int i = 5; i<1; i--)
        {
            if (number[j]>number[i])
            {
                continue;
            }
            else if (number[j]<number[i])
            {
                int rame = number[j];
                number [j] = number [i];
                number [i] = rame;
            }
        }
    }
    for (int i =0; i<5; i++ )
    {
        cout<<number[i];
    }
}