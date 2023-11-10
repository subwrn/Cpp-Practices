#include<iostream>
using namespace std;
#include<array>
#include<cstdlib>
#include<ctime>
int main()
{
   std::srand(std::time(0));
    int vermilion[9]={20,30,20,9,30,30,20,30};
    int vermilionSize = sizeof(vermilion) / sizeof(vermilion[0]);
    int random = rand() % vermilionSize;
    cout<<vermilion[random];
    return 0;
}