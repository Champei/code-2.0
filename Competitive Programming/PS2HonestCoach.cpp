#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits>   

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> strengths(n);
        for (int i = 0; i < n; i++) {
            cin >> strengths[i]; 
        }

        sort(strengths.begin(), strengths.end());

        int min_diff = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            int diff = strengths[i + 1] - strengths[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
        cout << min_diff << endl;
    }

    return 0;
}
