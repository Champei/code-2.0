#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> roundNumbers;
        
        int position = 1; // Tracks the position (units, tens, hundreds, etc.)
        
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * position);
            }
            n /= 10;
            position *= 10;
        }
        
        // Output the result
        cout << roundNumbers.size() << endl;
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}