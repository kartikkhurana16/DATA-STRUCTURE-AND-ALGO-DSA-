#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,int k){
    int l=0;
    int r=0;
    int count=0;
    unordered_map<int,int>mp;
    while(r<arr.size()){
        mp[arr[r]]++;
        while(mp.size()>k){
            mp[arr[l]]--;
            if(mp[arr[l]]==0){
                mp.erase(arr[l]);
            }
            l++;
        }
        count+=r-l+1;
        r++;
    }
    return count;
}
int main(){
    vector<int>arr={1,2,1,3,4};
    int k=3;
    cout<<func(arr,k)-func(arr,k-1);
    return 0;
}