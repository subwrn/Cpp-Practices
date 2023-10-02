/*
Create a C++ program that prompts the user to enter two integers and stores them in separate variables.
Use logical operators to determine whether the first integer is greater than or equal to the second integer.
Use logical operators to determine whether the second integer is not equal to 0.
Use logical operators to determine whether both conditions in steps 2 and 3 are true.
Output the results of each comparison to the console.
*/
#include<iostream>
using namespace std;
int main ()
{
    int Var_One, Var_Two;
    cout<<"enter two interger numbers : ";
    cin >> Var_One>> Var_Two;
    int Cond_One, Cond_Two, Cond_Three;
    Cond_One = (Var_One >= Var_Two);
    Cond_Two = (Var_Two != 0 );
    Cond_Three = (Cond_One == 1 || Cond_Two == 1);
    cout<<Cond_One<<Cond_Two<<Cond_Three;
    return 0;

}
