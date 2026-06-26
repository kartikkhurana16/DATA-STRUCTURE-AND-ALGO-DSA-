#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;

void dfs(long long a, long long b, int steps, long long n) {
    if (a == n || b == n) {
        ans = min(ans, steps);
        return;
    }

    if (a > n && b > n) return;
    if (steps >= ans) return;

    dfs(a + b, b, steps + 1, n);
    dfs(a, a + b, steps + 1, n);
}

int main() {
    long long n;
    cin >> n;
    dfs(1, 1, 0, n);
    cout << ans << endl;
}