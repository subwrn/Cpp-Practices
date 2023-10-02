// INtroducing difference between static and nonstatic variable.
#include<iostream>
using namespace std;
void this_static()
{
    static int a;
    a++;
    cout<<a<<endl;
}
/*void nonstatic()
{
    int b=0;
    b++;
    cout<<b;
}*/
int main ()
{
    int i;
    for (i=0; i<3; i++)
    {
        this_static();
        cout<<endl;

    }
    return 0;
}