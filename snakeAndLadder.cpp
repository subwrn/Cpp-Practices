#include<iostream>
#include<iomanip>
#include<chrono>
#include<ctime>
using namespace std;
int circle(int number)
{int result = 0;
    result=number+result;
     cout << "   ___" << endl;
    cout << " /     \\" << endl;
    cout << "|   " << result << "   |" << endl;
    cout << " \\___ __/" << endl;
}
int main()
{
    
   int  result = 0;
    int random;
    random = rand() % 6 + 1;
    circle(random);
    int count = 100;
    for (int j=1; j<=10; j++){
    for ( int i=0; i<=9; i++)
    {
        
        cout << setw(20) << left << count;
        count--;
        } 
    cout<<endl;
    }
}
