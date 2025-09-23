#include <iostream>
#include <vector>
using namespace std;

int mNo(vector<int>& arr, int n) {
    long long curSum = 0;
    for (int i = 0; i < n - 1; i++) {
        curSum += arr[i];
    }

    long long tS = 1LL * n * (n + 1) / 2;
    return tS - curSum;
}

int main() {
    int n;
    cin >> n;   
    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << mNo(arr, n);
    return 0;
}
