#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    // Leftmost maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Rightmost minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[minIndex]) {
            minIndex = i;
        }
    }

    int ans = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
        ans--;

    cout << ans;

    return 0;
}