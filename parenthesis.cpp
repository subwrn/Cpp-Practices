#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;

    char arr[n];
    cout << "Enter the characters one by one:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int countOpen = 0; // Counter for opening parentheses
    int countClose = 0; // Counter for closing parentheses

    for (int i = 0; i < n; i++) {
        char current = arr[i];

        if (current == '(' || current == '[' || current == '{') {
            // If it's an opening parenthesis, increase the count of opening parentheses
            countOpen++;
        } else if (current == ')' || current == ']' || current == '}') {
            // If it's a closing parenthesis, increase the count of closing parentheses
            countClose++;

            // Check if there is a corresponding opening parenthesis for the current closing parenthesis
            if ((current == ')' && countOpen < countClose) ||
                (current == ']' && countOpen < countClose) ||
                (current == '}' && countOpen < countClose)) {
                cout << "The string is invalid." << endl;
                return 0; // Exit the program, no need to continue checking
            }
        }
    }

    // Check if the counts of opening and closing parentheses match
    if (countOpen == countClose) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is invalid." << endl;
    }

    return 0;
}
