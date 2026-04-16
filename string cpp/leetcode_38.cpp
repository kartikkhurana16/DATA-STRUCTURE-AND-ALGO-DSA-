#include <bits/stdc++.h>
using namespace std;
string func(int n) {
    if (n == 1) return "1";

    string say = func(n - 1);
    string result = "";

    for (int i = 0; i < say.length(); i++) {
        char ch = say[i];
        int count = 1;

        while (i + 1 < say.length() && say[i] == say[i + 1]) {
            count++;
            i++;
        }

        result += to_string(count);
        result += ch;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}