#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> lodu{1,2,3,4,5};
    vector<int> temp(lodu.size());

        int k = 3;
    for (int i = 0; i<lodu.size(); i++)    
    {
        temp[(i+k) % lodu.size()] = lodu[i];
    
    }

    


    for (int i = 0; i<lodu.size(); i++)
    {
        cout<<temp[i]<<"\t";
    }


}