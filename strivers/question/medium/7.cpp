#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&arr ){
    int n=arr.size();
    int sum=0;
    int ans=0;
    unordered_map<int,int>mp;
    mp[0]=-1;
    for(int i=0;i<n;i++){
       if(arr[i]==0){
        sum-=1;
       }
       else{
        sum+=1;
       }
       if(mp.find(sum)!=mp.end()){
        ans=max(ans,i-mp[sum]);
       }
       else{
        mp[sum]=i;
       }
    }
    cout<<ans;
}
int main()
{
    vector<int> arr={0,1,1,1,1,1,0,0,0};
    pivot(arr);
    return 0;
}