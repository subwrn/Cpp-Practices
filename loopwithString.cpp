#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sent = "XXX is the only thing 30 years guy should not allow his children to know ";
    for (int i=0; i<sent.size(); i++)
    {
        if (sent[i] == 'X') 
        {
            sent[i] = '*';
            
        }
    }
        cout<<sent;
        return 0;
    }
