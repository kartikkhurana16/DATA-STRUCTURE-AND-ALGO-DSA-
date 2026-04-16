#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    int n=nums.size();
    vector<int>ans;
    int top=0,bottom=n-1;
    int left=0,right=n-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(nums[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(nums[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(nums[bottom][i]);
        }
        bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(nums[i][left]);
        }
        left++;
    }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}