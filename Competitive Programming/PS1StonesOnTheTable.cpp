#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string stone;
    cin >> stone;

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (stone[i] == stone[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
