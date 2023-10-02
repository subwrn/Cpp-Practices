// how many notes are required to make at 5439 rupees ? if there are notes of 100 50 20 10, 5,2,1;
// answer is simple : 54 --- 100's
//                  : 0  --- 50's
//                  : 1  --- 20's
//                  : 1  --- 10's
//                  : 1  --- 5's
//                  : 2  --- 2's
//                  : 0  --- 1's;


// This is the total lowest number of money we can make 5439 which is 54 hundreds 1 twentys 1 tens 1 fives 2 twos 😊 easy one don't worry
// using switch statement:

#include<iostream>
using namespace std;

int main()
{
    int money;
    cout << "How much money do you have? : ";
    cin >> money;

    int note;

    if (money >= 100)
    {
        note = money / 100;
        cout << "\nyou have " << note << " ---- 100's";
        money = money - (note * 100);
    }

    if (money >= 50)
    {
        note = money / 50;
        cout << "\nyou have " << note << " ---- 50's";
        money = money - (note * 50);
    }

    if (money >= 20)
    {
        note = money / 20;
        cout << "\nyou have " << note << " ---- 20's";
        money = money - (note * 20);
    }

    if (money >= 10)
    {
        note = money / 10;
        cout << "\nyou have " << note << " ---- 10's";
        money = money - (note * 10);
    }

    if (money >= 5)
    {
        note = money / 5;
        cout << "\nyou have " << note << " ---- 5's";
        money = money - (note * 5);
    }

    if (money >= 2)
    {
        note = money / 2;
        cout << "\nyou have " << note << " ---- 2's";
        money = money - (note * 2);
    }

    if (money >= 1)
    {
        note = money;
        cout << "\nyou have " << note << " ---- 1's";
    }

    return 0;
}
