#include<iostream>
using namespace std;
int main()
{
   int i = 5;
   int num, sqr;
   num = 1;
   while (i>0)
   {

   sqr = num * num;
   num = num * 10 + 1;
   i--;
   cout<<sqr;
   cout<<endl;
   }
}