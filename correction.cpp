#include <iostream>
int main()
{
    int lead[] = {16, 17, 3, 5, 7, 2};
    int size = sizeof(lead) / sizeof(lead[0]);
    int result;
    int x =0;
    int str[];
    for (int j = 0; j < size; j++)
    {
        bool istrue = true;
        for (i = 0; i < size; i++)
        {
            if (lead[x] <= lead[i])
            {
                istrue = false;
                x++;
            }

            
        }
        if(istrue)
        {
            int n=0;
            str[n] = lead[x];
            n++;
        }
    }
}