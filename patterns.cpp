#include<iostream>
using namespace std;
int main()
{
   int i,j;
   i = 5;
   while (i>0)
   {
   j = 1;

      while (j<=5)
      {
         if (j<=i){

         cout<<j;
         }
         else {
            cout<<"*";
         }
         j++;
      }
      int l = 5;
      while (l>0)
      {
         if (l<=i)
         {
            cout<<l;
         }
         else {
            cout<<"*";
         }
         l--;
      }
     
      i--;
      cout<<endl;
   }
   return 0;
}