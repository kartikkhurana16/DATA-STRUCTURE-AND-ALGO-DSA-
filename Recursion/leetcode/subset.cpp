#include <bits/stdc++.h>
using namespace std;

void func(int index, vector<int>& num, set<int>& ds, vector<vector<int>>& ans) {
    if (index == num.size()) {
        vector<int> temp;

        for (int x : ds) {
            temp.push_back(x);
        }

        ans.push_back(temp);
        return;
    }

    // Pick
    ds.insert(num[index]);
    func(index + 1, num, ds, ans);

    // Backtrack
    ds.erase(num[index]);

    // Not Pick
    func(index + 1, num, ds, ans);
}

int main() {
    vector<vector<int>> ans;
    vector<int> num = {1, 2, 2};
    set<int> ds;

    func(0, num, ds, ans);

    for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}