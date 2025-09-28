#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string findSmallestNumber(int x) {
    vector<int> digits;
    int current = 9;
    int remaining = x;
    
    while (remaining > 0 && current > 0) {
        if (remaining >= current) {
            digits.push_back(current);
            remaining -= current;
        }
        current--;
    }

    if (x>45) {
        return "-1";
    }
    
    sort(digits.begin(), digits.end());
    
    string result = "";
    for (int digit : digits) {
        result += to_string(digit);
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << findSmallestNumber(x) << endl;
    }
    
    return 0;
}