#include <iostream>
using namespace std;

bool maximum(int arr[], int size, int k, int mid) {
    int cows = 1;
    int distance = 0;
    for (int i = 0; i < size; i++) {
        if (distance + arr[i] <= mid) {
            distance += arr[i];
        } else {
            cows++;
            if (cows > k || arr[i] > mid) {
                return false;
            }
        }
    }
    return true;
}

int findMaxMinDistance(int arr[], int size, int k) {
    int ans = -1;
    int start = 0;
    int end = 0;
    for (int i = 0; i < size; i++) {
        end += arr[i];
    }
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (maximum(arr, size, k, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k; // number of cows
    cout << "Enter the number of cows: ";
    cin >> k;
    int result = findMaxMinDistance(arr, size, k);
    cout << result;
}
