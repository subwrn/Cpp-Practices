#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int game(int num);
void print(vector<int> save);

int main()
{
    bool condi = true;
    string play;
    srand(time(0));
    while (condi)
    {
        cout << "\nPlay or Exit : ";
        cin >> play;
        if (play == "play" || play == "Play")
        {
            condi = true;
            string levels;
            cout << "please choose your level - easy / medium / hard";
            cin >> levels;
            if (levels == "hard")
            {
                int num;
                num = rand() % 1000;
                game(num);
            }
            else if (levels == "easy")
            {
                int num;
                num = rand() % 10;
                game(num);
            }
            else
            {

                int num;
                num = rand() % 100;
                game(num);
            }
        }
        else
        {
            condi = false;
        }
    }
}
int game(int num)
{

    vector<int> save;

    int guess;
    bool correctGuess = false;
    while (!correctGuess)
    {

        cout << "\nguess the number : ";
        if (!(cin >> guess))
        {
            cout << "please enter an integer";
            exit(0);
        }

        save.push_back(guess);
        if (num > guess)
        {
            cout << "too less ";
        }
        else if (num < guess)
        {
            cout << "too high";
        }
        else
        {
            cout << "\n \n               BINGO ! Perfect Guess !" << endl
                 << endl;
            correctGuess = true;
            break;
        }
    }
    print(save);
    return 0;
}
void print(vector<int> save)
{
    cout << " you took " << save.size() << "tries : the provided guess are :" << endl;
    for (int i = 0; i < save.size(); i++)
    {
        cout << save[i] << endl;
    }
}
