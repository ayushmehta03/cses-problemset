#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int maxCount = 1, currentCount = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }
        maxCount = max(maxCount, currentCount);
    }

    cout << maxCount << endl;
    return 0;
}
