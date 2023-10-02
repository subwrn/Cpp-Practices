#include <iostream>
using namespace std;
int main()
{
    int a, b, i, k;
    cout << "enter the size of an array1: ";
    cin >> a;
    cout << "enter the size of an array2: ";
    cin >> b;
    k = a + b;
    int array1[a], array2[b];
    for (i = 0; i < a; i++)
    {
        cin >> array1[i];
    }
    for (i = 0; i < b; i++)
    {
        cin >> array2[i];
    }
    int array3[k];
    for (i = 0; i < a; i++)
    {
        array3[i] = array1[i];
    }
    for (i = 0; i < b; i++)
    {
        array3[a + i] = array2[i];
    }

    for (i = 0; i < k; i++)
    {
        for (int j = i + 1; j<k; j++)
        {
            if (array3[i]> array3[j])
        {
            int save;
            save = array3[j];
            array3[j] = array3[i];
            array3[i] = save;
        }
        }
    }
    for (i = 0; i < k; i++)
    {
        cout<<array3[i];
    }
    return 0;
}