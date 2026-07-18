#include<bits/stdc++.h>
using namespace std;
void func(int i, vector<int>& arr, vector<int>& ds,vector<vector<int>>& ans, int k, int sum) {
        if(i==arr.size()){
            if(sum==k){
                ans.push_back(ds);
            }
            return;
    }
    
    ds.push_back(arr[i]);
    func(i+1,arr,ds,ans,k,sum+arr[i]);

    ds.pop_back();
    func(i+1,arr,ds,ans,k,sum);
    
}
vector<vector<int>> print(vector<int>&arr,int k){
    vector<int>ds;
    vector<vector<int>>ans;

    func(0,arr,ds,ans,k,0);

    return ans;
}
int main(){
    vector<int>arr={1,2,1};
    int k;
    cin>>k;
    vector<vector<int>>ans=print(arr,k);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}

  return 0;
} 