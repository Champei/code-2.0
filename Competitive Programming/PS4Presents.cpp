#include <iostream>
using namespace std;

void inverseArray(int arr[], int inv[], int idx, int n) {
    // Base case
    if (idx == n) return;

    inv[arr[idx] - 1] = idx + 1; // adjust for 1-based indexing
    inverseArray(arr, inv, idx + 1, n); // recursive call for next index
}

int main() {
    int n;
    cin >> n;
    int arr[n], inv[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    inverseArray(arr, inv, 0, n);

    for (int i = 0; i < n; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}