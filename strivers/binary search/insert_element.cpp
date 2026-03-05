#include<bits/stdc++.h>
using namespace std;
int ans;
void func(vector<int>&nums,int n,int k){

        ans=lower_bound(nums.begin(),nums.end(),k)-nums.begin();
        nums.insert(nums.begin()+ans,k);

        for(int i=0;i<=n;i++){
            cout<<nums[i];
        }
    }

int main(){
    vector<int>nums={1,2,3,4,5,7};
    int n=nums.size();
    int  k;
    cin>>k;
    func(nums,n,k);
}