#include <iostream>
#include <string>
using namespace std;

int main() {
    string alpha = "gamamamamama";
    int n = 5;

    while (n > 0) {
        size_t pos = alpha.find("ma");
        if (pos != string::npos) {
            alpha.erase(pos, 2);
        } else {
            break; // Exit the loop when "ma" is no longer found
        }
        n--;
    }

    cout << alpha;
    return 0;
}
