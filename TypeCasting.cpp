// TYPE CASTING  - Implicit and Explicit typecasting 
#include<iostream>
using namespace std;
int main ()
{

    int a = 45;
    float b = 76.65;
    double c = 94.3434;
    cout<<"before typecasting : "<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"After typecasting : "<<endl;
    cout<<(float) b<<endl;                             // LOOK TYPECASTING IS THE CHANGING OF DATA TYPE THERE ARE TWO TYPES OF TYPECASTING.
                                                        // IMPLICIT AND EXPLICIT.
    cout<<(double) a<<endl;
    cout<<(int) c<<endl;
    return 0;


}