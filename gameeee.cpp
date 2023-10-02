#include<iostream>
#include<ctime>
#include<chrono>
using namespace std;
void waitforme()
{
    cout<<"\n please press any key to continue ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
    cout<<"Do you want to find what name your future wife starts with ";
    cout<<"\n Please press any key to continue ";
    waitforme();
    char yrName;
    cout<<"please enter first alphabet of your name";
    cin>>yrName;
    srand(time(0));
    int b = (rand() % 26) + 65;
    char c = (char)b;
    cout<<c;

    
}