// vectors and function implication
#include<iostream>
#include<vector>
using namespace std;

int ram(vector<int>&triangle)
{
    triangle.push_back(5);
    for (int i = 0; i<triangle.size(); i++)
    {
        cout<<triangle[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    vector<int>a{4,6,5,6,5,6};
    ram(a);
}
/*int ram(std::vector <int> &raban)
{
raban.push_back(6);
    for (int i =0; i<raban.size(); i++)
    {
        cout<<raban[i]<<"  ";
    }cout<<endl;
}
int main ()
{
std::vector<int>kamala{2,3,4};
ram(kamala);
ram(kamala);
ram(kamala);
ram(kamala);
ram(kamala);

}*/