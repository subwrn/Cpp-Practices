#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file ("lamda.txt",ios::app);
    file<<"ok";
    
    if (file.is_open())
    {
        cout<<"hi";
    }
}