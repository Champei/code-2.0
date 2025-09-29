#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 4 != 0) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    
    // First half: even numbers
    for (int i = 1; i <= n / 2; i++) {
        cout << 2 * i << " ";
    }
    
    // Second half: odd numbers, with last element adjusted
    for (int i = 1; i < n / 2; i++) {
        cout << 2 * i - 1 << " ";
    }
    
    // Last element to balance the sum
    cout << n + n / 2 - 1 << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}