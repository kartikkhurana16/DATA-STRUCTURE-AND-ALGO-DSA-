#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
vector<bool> visited;

int f(int index) {
    if(index == n)
        return 0;

    visited[index] = true;

    int op1 = 1e9;
    int op2 = 1e9;

    // Move to the next step
    if(index + 1 <= n && !visited[index + 1]) {
        op1 = 1 + f(index + 1);
    }

    // Jump according to the value on the current step
    if(index < n) {
        int nxt = index + arr[index];
        if(nxt >= 0 && nxt <= n && !visited[nxt]) {
            op2 = 1 + f(nxt);
        }
    }

    visited[index] = false;

    return min(op1, op2);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n;

        arr.resize(n);
        visited.assign(n + 1, false);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
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