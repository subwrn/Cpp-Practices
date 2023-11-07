#include<iostream>
using namespace std;

// length mang function which returns the length ofstring entered and stred in mangekyo;
int lenMang(char *mangekyo)
{
    int len = 0;
    for (int i = 0; mangekyo[i] != 0; i++)
    {
        len++;

    }

   return len; 
}
int main()
{
    // char alpha[20];
    // cin>>alpha;
    // cout<<alpha;


    // char sigma[10] = {'s','a','m','p','r','a','d','a'};
    // cout<<sigma;

    // string gama = "gamaMale";
    // cout<<gama;

    char mangekyo[20];
    cin>>mangekyo;
    
   // printing the inputs

   cout<<"the entered string is -> "<<mangekyo<<"\n";
   
    cout<<"the length of the entered string is ->"<<lenMang(mangekyo);      // lenMang is the function to print the length of the string;

} // namespace std;
