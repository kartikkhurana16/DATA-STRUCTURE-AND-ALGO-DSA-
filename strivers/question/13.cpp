#include <bits/stdc++.h>
using namespace std;

void show(vector<int>& arr) {
    int m = arr.size();
    int maxi = *max_element(arr.begin(), arr.end());

    vector<int> hash(maxi + 1, 0); // use vector for safety

    // count frequencies
    for (int i = 0; i < m; i++) {
        hash[arr[i]]++;
    }

    // print unique elements (appearing once)
    for (int i = 0; i < m; i++) {
        if (hash[arr[i]] == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    show(arr);
    return 0;
}
