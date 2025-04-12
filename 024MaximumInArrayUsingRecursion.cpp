#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n, int i) {
    if (i == n - 1) {
        return arr[i];
    }

    return max(arr[i], findMax(arr, n, i + 1));
}

int main() {
    int arr[] = {10, 45, 2, 90, 67, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = findMax(arr, n, 0);
    cout << "Maximum value in the array: " << maxVal << endl;

    return 0;
}
