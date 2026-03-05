#include<bits/stdc++.h>
using namespace std;
bool predicate(vector<int>nums,int k,int mid){
    int temp=1;
    int sum=0;
    for(auto i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>mid){
            sum=nums[i];
            temp++;
            if(temp>k){
                return false;
            }
        }
    }
    return true;
}
void func(vector<int>&nums,int k){
    int low=*max_element(nums.begin(),nums.end());
    int high=accumulate(nums.begin(),nums.end(),0);
    while(low<high){
        int mid=low+(high-low)/2;
        if(predicate(nums,k,mid)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low;
}
int main(){
    vector<int> nums={1,2,3,4,5};
    int k=2;
    func(nums,k);
    return 0;
}