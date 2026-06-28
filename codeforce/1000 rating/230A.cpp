#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons;

    for (int i = 0; i < n; i++) {
        int Dstrength, bonus;
        cin >> Dstrength >> bonus;
        dragons.push_back({Dstrength, bonus});
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++) {
        if (s <= dragons[i].first) {
            cout << "NO";
            return 0;
        }
        s += dragons[i].second;
    }

    cout << "YES";
    return 0;
}