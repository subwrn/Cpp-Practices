#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string filename;
    cin>>filename;
    ofstream file (filename.c_str(),ios::app);
    file<<"practice.cpp " <<endl;
    file<<"ok i will practice ";
    file.close();
    return 0;
}