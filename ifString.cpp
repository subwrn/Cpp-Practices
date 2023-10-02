#include <iostream>
using namespace std;
int main()
{
    string name = "subarna";
    string guess;
    cout << "geuss my name ";
    cin >> guess;
    if (guess == name)
    {
        cout << "you gotta to be my buddy or some weird guesser";
        cout << "\n THat was the perfect guess";
    }
    else
    {
        cout << "Better luck next time ";
        cout << "\n TRY AGAIN ";
    }
    return 0;
}