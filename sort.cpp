#include <iostream>
using namespace std;
int main()
{
    int sort[5], a = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> sort[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sort[i] > sort[j])
            {
                int ram = sort[i];
                sort[i] = sort[j];
                sort[j] = ram;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << sort[i] << endl;
    }
    // inserting arrray now into this sorting methods ?
    int x;
    cout << "enter the data you want to add : ";
    cin >> x;
    int copy[5];
    for (int i = 0; i < 5; i++)
    {
        copy[i] = sort[i];
    }
    int j;
    for (int i = 0; i < 6; i++)
    {
        if (x > sort[i])
        {
            sort[i] = x;
            j = i;
            break;
        }
    }
    for (int k = j; k <= 6 - j; k++)
    {
        sort[k+1] = copy[k];
    }
    for (int i= 0; i<6; i++)
        {
            cout << sort[i] << endl;
        }
        return 0;
    }