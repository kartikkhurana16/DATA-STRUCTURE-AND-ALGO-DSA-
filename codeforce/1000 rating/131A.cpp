#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            flag = false;
            break;
        }
    }
    if (flag) {
        for (char &ch : s) {
            if (islower(ch))
                ch = toupper(ch);
            else
                ch = tolower(ch);
        }
    }
    cout << s;
    return 0;
}