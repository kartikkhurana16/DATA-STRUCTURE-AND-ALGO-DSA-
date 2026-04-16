#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&arr , int k){
    int n=arr.size();
    int sum=0;
    unordered_map<int,int>mp;
    mp[0]=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int rem=sum % k;
        if(mp.find(rem)!=mp.end()){
            if(i-mp[rem]>=2){
                cout<< "true";
            }
            else{
                mp[rem]=i;
            }
        }
    }
    cout<< "false";
}
int main()
{
    vector<int> arr={23,2,4,6,7};
    int k;
    cin>>k;
    pivot(arr,k);
    return 0;
}