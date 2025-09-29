#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int evenCount = 0, oddCount = 0;
        int misplacedEven = 0, misplacedOdd = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            
            // Count total even and odd numbers
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            
            // Check if element is in correct position
            if (i % 2 == 0) { // Even index should have even number
                if (arr[i] % 2 != 0) {
                    misplacedEven++;
                }
            } else { // Odd index should have odd number
                if (arr[i] % 2 != 1) {
                    misplacedOdd++;
                }
            }
        }
        
        // Check if solution is possible
        int requiredEven = (n + 1) / 2; // Number of even indices
        int requiredOdd = n / 2;        // Number of odd indices
        
        if (evenCount != requiredEven || oddCount != requiredOdd) {
            cout << -1 << endl;
        } else {
            // The number of swaps needed equals the number of misplaced elements
            // Since each swap fixes two misplaced elements
            cout << misplacedEven << endl;
        }
    }
    
    return 0;
}