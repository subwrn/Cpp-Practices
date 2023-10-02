#include<iostream>
using namespace std;
int main ()
{
    int Num_1, Num_2;
    cout<<"enter two number : NUM1 and NUM2 ";
    cin>>Num_1>>Num_2;
    int Sum, Difference, Divide, Multiply, Quotient;
    Sum         = Num_1 + Num_2;
    Difference  = Num_1 - Num_2;
    Divide      = Num_1 / Num_2;
    Multiply    = Num_1 * Num_2;
    Quotient    = Num_1 % Num_2;
    cout<<"Sum"<<Sum<<endl;
    cout<<"Difference"<<Difference<<endl;
    cout<<"Divide"<<Divide<<endl;
    cout<<"Multiply"<<Multiply<<endl;
    cout<<"Quotient"<<Quotient<<endl;
    return 0;

}