#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>>ans;

    void func(int index,vector<int>&num,vector<int>&ds){
        ans.push_back(ds);
        for(int i=index;i<num.size();i++){
            if(i>index && num[i]==num[i-1]) 
                continue;

            ds.push_back(num[i]);
            func(i+1,num,ds);
            ds.pop_back();
        }
    }
int main(){
    vector<int>num={1,2,2};
        // sort(num.begin(), num.end());
    vector<int>ds;
    func(0,num,ds);

      for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}