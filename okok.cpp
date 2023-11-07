#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alpha = "gamamamamama";
    int n = 12;
    while (n > 0)
    {
        if (alpha.find("ma") != 0)
        {
            int range = (alpha.find("ma"));
            alpha.erase(range, 2);
        }
        n--;
    }
    cout << alpha;
}