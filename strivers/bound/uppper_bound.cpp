#include<bits/stdc++.h>
using namespace std;
int ans;
void func(vector<int>&nums,int n,int k){

        ans=upper_bound(nums.begin(),nums.end(),k)-nums.begin();
        cout<<ans;
    }

int main(){
    vector<int>nums={1,2,3,4,5,6,6};
    int n=nums.size();
    int  k;
    cin>>k;
    func(nums,n,k);
}