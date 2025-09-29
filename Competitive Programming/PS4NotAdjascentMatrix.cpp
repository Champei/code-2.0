#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << "1\n";
            continue;
        }
        
        if (n == 2) {
            cout << "-1\n";
            continue;
        }
        
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int num = 1;
        
        // Fill the matrix with numbers from 1 to n*n
        // but arranged in a way that no two adjacent cells have consecutive numbers
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = num;
                num += 2;
                if (num > n * n) {
                    num = 2;
                }
            }
        }
        
        // Output the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}