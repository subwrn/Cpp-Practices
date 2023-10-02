//area of circle and circumference of circle are 
#include<iostream>
using namespace std;
int circle(int r)
{
    int area, circumference;
    area = ( 22/7 )*r*r;
    circumference = 2*(22/7)*r;
    cout<<"the area of the circle and the circumferencce of the circle is : "<<area<<"and"<<circumference;
}
int main ()
{
    int r;
    cout<<"enter the radius ";
    cin>>r;
    circle(r);
    return 0;
}