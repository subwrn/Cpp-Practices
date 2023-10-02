// Take values of length and breadth of a rectangle from user and check if it is square or not. IF - ELSE
#include<iostream>
using namespace std;
int main ()
{
    cout<<" enter value of length and breadth of a rectanglec";
    int Length, Breadth;
    cin>>Length>>Breadth;
    if (Length == Breadth)
    {
        cout<<"wow a rectangle witha perfect square ! Bingo !";
    }
    else 
    {
        cout<<"BETTER LUCK NEXT TIME";
    }
    return 0;
}
