#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;  // number of test cases
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // input array
        }

        // Step 1: compute b[i] = a[i] - (i + 1)
        vector<long long> b(n);
        for (int i = 0; i < n; ++i) {
            b[i] = a[i] - (i + 1);
        }

        // Step 2: sort array b
        sort(b.begin(), b.end());

        // Step 3: count pairs of equal numbers
        long long ans = 0;
        long long count = 1; // current group count
        for (int i = 1; i < n; ++i) {
            if (b[i] == b[i - 1]) {
                count++;
            } else {
                ans += count * (count - 1) / 2;
                count = 1;
            }
        }
        ans += count * (count - 1) / 2; // last group

        cout << ans << "\n";
    }
    return 0;
}
 