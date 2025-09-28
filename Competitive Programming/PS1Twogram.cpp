#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string answer;
    int maxCount = 0;

    for (int i = 0; i < n - 1; i++) {
        string current = s.substr(i, 2);
        int count = 0;

        for (int j = 0; j < n - 1; j++) {
            if (s.substr(j, 2) == current) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            answer = current;
        }
    }

    cout << answer << endl;
    return 0;
}
