#include<bits/stdc++.h> 
using namespace std;
void func(int i,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
    if(i==nums.size()){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[i]);
    func(i+1,nums,ans,ds);

    ds.pop_back();
    func(i+1,nums,ans,ds);


}
vector<vector<int>> subset(vector<int>nums){
    vector<int>ds;
    vector<vector<int>>ans;
    func(0,nums,ans,ds);
    
    return ans;
}
int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans=subset(nums);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}