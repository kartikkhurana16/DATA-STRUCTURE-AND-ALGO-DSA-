#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 1, c = 0;

void fibo(int n) {
    if (n == 0)
        return;

    cout << a << " ";

    c = a + b;
    a = b;
    b = c;

    fibo(n - 1);
}

int main() {
    int n;
    cin >> n;

    fibo(n);

    return 0;
}