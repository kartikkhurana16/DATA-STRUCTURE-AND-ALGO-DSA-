#include<bits/stdc++.h>
using namespace std;
 int ans=-1;
void func(vector<int>&nums,int n,int k){
        
      ans = upper_bound(nums.begin(), nums.end(), k) - nums.begin();

        if(ans<n)    cout<<ans;
        else cout<<-1;
    }

int main(){
    vector<int>nums={3, 4, 13, 13, 13, 20, 40};
    int n=nums.size();
    int  k;
    cin>>k;
    func(nums,n,k);
}