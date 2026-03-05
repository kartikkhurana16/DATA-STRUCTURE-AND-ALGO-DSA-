#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) 
        {
            cout<<mid;
            break;
        }
        if(nums[low] >= nums[mid]){
            if(nums[mid] < target && target <= nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            if(nums[mid]>=target && target<=nums[low]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
    }
}
int main(){
    vector<int>nums={7,8,9,1,2,3,4,5,6};
    int target;
    cin>>target;
    func(nums,target);
    return 0;
}