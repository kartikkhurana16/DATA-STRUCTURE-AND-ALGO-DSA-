//Sort according to an Array

#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&arr1,vector<int>&arr2){
    unordered_map<int,int>mp;
    for(int i:arr1){
        mp[i]++;
    }
    int index=0;
    for(int x:arr2){
        while(mp[x]>0){
            arr1[index++]=x;
            mp[x]--;
        }
    }
    vector<int>remain;
    for(auto it:mp){
        while(it.second>0){
            remain.push_back(it.first);
            it.second--;
        }
    }
    sort(remain.begin(),remain.end());
    for(int i:remain){
        arr1[index++]=i;
    }

}
int main(){
    vector<int>arr1={2, 1, 2, 3, 4};
    vector<int>arr2={2, 1, 2};
    func(arr1,arr2);
    return 0;
}