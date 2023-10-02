#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int game()
;
int main()
{
    string giveup;
    cout<<"roll / giveup ? ";
    cin>>giveup;
    if ((giveup != "roll"))
    {
        cout<< "i knew you could not keep up thu ";
    }
    else {
        game();
    }

}

int game ()
{
    int roller ;
    roller = rand() % 6 + 1;
     int result = result + roller;
    int count = 1;
    for (int j = 0; j <= 9; j++){

    for (int i = 0; i <= 9; i++)
    {
        if (result == count)
        {
            cout<<setw(15)<<left<<"*"<<count;
                        count ++;
        }else{
        }
        cout <<setw(15) <<left << count;
        count ++;
            
    }
    cout<<endl;
    }
}