// Given an array of integer nums and an integer k, return the total number of subarrays whose sum equals k.
// A subarray is a contiguous non-empty sequence of elements within an array. 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    int count=0;

    int l=0;
    int r=0;
    int sum=0;
    while(r<n){
        if(sum<k){
            sum+=arr[r];
        }
        while(sum>k){
            sum-=arr[l];
            l++;
        }
        if(sum==k){
            count++;
            sum-=arr[l];
            l++;
        }
        r++;
    }
    
    cout<<count;
    
    return 0;
}

// 7
// 0 1 2 3 4 5 6
// 9