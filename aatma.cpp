#include<iostream>
#include<ctime>
#include<chrono>
#include<string>
using namespace std;
int main()
{ 
string giveup = "roll";
cout<<"roll / giveup "  ;
cin>>giveup;
    int result = 0 ;
     while (giveup == "roll"){
    
    int random;
    random = rand() % 6 + 1;
    result = result + random ;
    
    cout<<result;

cout<<"\nroll / giveup "  ;
cin>>giveup;
}
}