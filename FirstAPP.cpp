
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int luck;
    cout << "How lucky are you feeling today?\n\n";
    cout << "Wanna test luck?\n";
    cout << "Enter how lucky you feel right now out of 100: ";
    cin >> luck;

    srand(time(0));
    int a = rand() % 100;

    if (a == luck)
    {
        cout << "You are the luckiest person I have ever met in this world.\n";
    }
    else if (luck > a)
    {
        cout << "Don't try to fool me, your luck today is: " << a << endl;
    }
    else
    {
        cout << "You have bad luck.\n";
        cout << "You got luck of " << a << "%\n";
    }
    // Use system("pause") to keep the console window open
    system("pause");
    cout<<"do you want to continue ";
    cin.get();
    return 0;
}
