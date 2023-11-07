#include<iostream>
using namespace  std;

int rev(char *string)
{   

    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        count ++;
    }
int limit = count;

int div = count / 2;
    for (int i = 0; i <= div; i++)
    {
            char temp = string[i];
            string [i] = string[count];
            string[count] = temp;
            count --;
    }
    for (int i = 0; i<limit; i++)
    {
        cout<<string[i];
    }

}
int main()

{
    char string[20];
    cin>>string;


    cout<<"the entered string is -> ";
    cout<<"the reversed string is -> "<<rev(string);
} // namespace  std;
// int main()

