#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;
vector<bool> visited;

int f(int index) {
    if(index == n - 1)
        return 0;

    visited[index] = true;

    int op1 = 1e9;
    int op2 = 1e9;

    if(index + 1 < n && !visited[index + 1])
        op1 = 1 + f(index + 1);

    // int nxt = index + arr[index];
    if(index + arr[index] >= 0 && index + arr[index] < n && !visited[index + arr[index]])
        op2 = 1 + f(index + arr[index]);

    visited[index] = false;

    return min(op1, op2);
}

int main() {
    int k;
    cin >> k;

    for(int i = 0; i < k; i++) {

        cin >> n;

        arr.resize(n);
        visited.assign(n, false);

        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int ans = f(0);

        if(ans >= 1e8)
            cout << -1;
        else
            cout << ans;

        cout << '\n';
    }

    return 0;
}