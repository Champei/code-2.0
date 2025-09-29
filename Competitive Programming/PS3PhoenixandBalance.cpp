#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Calculate 2^n using pow function
        long long largest = pow(2, n);
        long long sum1 = largest;
        long long sum2 = 0;
        
        // First group: largest coin + (n/2 - 1) smallest coins
        for (int i = 1; i < n/2; i++) {
            sum1 += pow(2, i);
        }
        
        // Second group: all remaining coins
        for (int i = n/2; i < n; i++) {
            sum2 += pow(2, i);
        }
        
        cout << abs(sum1 - sum2) << endl;
    }
    
    return 0;
}