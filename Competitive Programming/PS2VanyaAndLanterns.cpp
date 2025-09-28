#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    double max_gap = 0;
    for (int i = 1; i < n; i++) {
        double gap = a[i] - a[i - 1];
        if (gap > max_gap) {
            max_gap = gap;
        }
    }
    
    double radius = max_gap / 2.0;
    
    if (a[0] > radius) {
        radius = a[0];
    }
    if (l - a[n - 1] > radius) {
        radius = l - a[n - 1];
    }
    
    cout.precision(10);
    cout << fixed << radius << endl;
    
    return 0;
}