#include<bits/stdc++.h>
using namespace std;

    int lowwer(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while (low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<" ";
    }
    int uppperr(vector<int>&nums,int target){
    int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while (low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }    
        }
        cout<<ans;
    }
void search(vector<int>&nums,int target){
    lowwer(nums,target);
    uppperr(nums,target);
}
int main(){
    vector<int>nums={5,7,7,8,8,10};
    int target;
    cin>>target;
    search(nums,target);
    return 0;
}