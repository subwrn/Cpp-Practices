#include<iostream>
using namespace std;
int main()

{
    int answer= 2;
    int guess;
    cout<<"guess a number ";
    cin>>guess;
    (answer==guess)? cout<<"perfect guess" : cout<<"try again";
    return 0;
} // namespace std;
