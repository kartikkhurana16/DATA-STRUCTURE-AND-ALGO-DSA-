#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int>nums={1,2,3,4,5};
    int n=nums.size();
    vector<int>pref(n,0);
    pref[0]=nums[0];
    
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+nums[i];
    }
    unordered_map<int,int> mp;
    mp[0]=1;
    int sum=0;
    for(int j=0;j<n;j++)
    {
        if(pref[j]==k) sum++;
        int val=pref[j]-k;
        if(mp.find(val)!=mp.end()){
            sum+=mp[val];
        }
        mp[pref[j]]++;
    }
    cout<<sum;
    return 0;
}