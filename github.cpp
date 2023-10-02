#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string name, address, gmail, languageKnown, education;
    int age;
    double phoneNumber;
    cout << "Name + age + address + gmail + Phone Number + Education + Language Known: ";
    cin >> name >> age >> address >> gmail >> phoneNumber >> education >> languageKnown;
    cout << "You can call me \t\t:" << name << "\nMY current age is\t\t: " << age << "\nI am from\t\t\t: " << address << "\nMail me at\t\t\t: " << gmail << "\nContact Me\t\t\t: +" << phoneNumber << "\ni am proficient in\t\t: " << languageKnown << "\nand i am currently studying\t: " << education << endl;

    return 0;
}