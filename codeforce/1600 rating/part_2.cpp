#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;

void dfs(long long a, long long b, long long n, int steps) {

      if (a == n || b == n) {
        ans = min(ans, steps);
        return;
    }

    if (a >n && b >n) return;

    if (steps >= ans) return;

    // dfs(n,steps + 1,n - 1, b);
    dfs(n-1,b,n,steps+1);
    dfs(a,n-2,n,steps+1);
    // dfs(n,steps + 1,a, n - 2);
}

int main() {
    long long n;
    cin >> n;
    dfs(1,1,n,0);
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;

void dfs(long long a, long long b, int steps) {
    if (a == 1 && b == 1) {
        ans = min(ans, steps);
        return;
    }

    if (steps >= ans) return;

    // ensure a >= b for simplicity
    if (a < b) swap(a, b);

    // reverse step 1: (a-b, b)
    if (a > b) {
        dfs(a - b, b, steps + 1);
    }

    // reverse step 2: (a, b-a)
    if (b > 0 && b != a) {
        dfs(a, b - a, steps + 1);
    }
}

int main() {
    long long n;
    cin >> n;

    dfs(n, 1, 0);
    dfs(1, n, 0);

    cout << ans << endl;
}