#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 0;

void generate(int x) {
    if (x > n)
        return;

    ans++;

    generate(x * 10);
    generate(x * 10 + 1);
}

int main() {
    cin >> n;
    generate(1);
    cout << ans;
    return 0;
}