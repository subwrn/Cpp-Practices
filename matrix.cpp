#include<iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter length: ";
    cin >> n;
    cout << "What is the threshold value? ";
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                for (int l = i; l <= j; l++) {
                    cout << arr[l];
                    if (l == j) {
                        cout << endl;
                    } else {
                        cout << " ";
                    }
                }
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No subarray found with a sum of " << k << endl;
    }

    return 0;
}
