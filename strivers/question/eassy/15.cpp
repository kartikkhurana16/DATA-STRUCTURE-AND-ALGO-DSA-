#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&nums , int k){
    int n=nums.size();
    double sum=0;
    double curr=0;
    for(int i=0;i<k;i++){
        curr+=nums[i];
        sum=curr;
    }
    for(int i=k;i<n;i++){
        curr+=nums[i]-nums[i-k];
        sum=max(curr,sum);
    }
    cout<<sum/k;
}
int main()
{
    vector<int> arr={1,12,-5,-6,50,-3};
    int k;
    cin>>k;
    pivot(arr,k);
    return 0;
}