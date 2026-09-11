#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int moves = (n + 1) / 2;  
    while (moves <= n) {
        if (moves % m == 0) {
            cout << moves;
            return 0;
        }
        moves++;
    }
    cout << -1;

    return 0;
}