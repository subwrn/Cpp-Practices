#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ifstream file ("lamda.txt", ios::app);
string input;
 vector<string> name;
    while(file>>input)
    {
        name.push_back(input);
    }
    for (string names : name)
    {
        cout<<names;
    }
}