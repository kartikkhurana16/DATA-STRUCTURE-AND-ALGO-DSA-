#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&nums){
    int low=0;
    int high=nums.size()-1;
    while (low<high)
    {
        int mid=low+(high-low)/2;
        if(mid%2==1){
            mid--;
        }
        if(nums[mid]==nums[mid+1]){
            low=mid+2;
        }
        else{
            high=mid;
        }
    }
    cout<<nums[low];
    
}
int main(){
    vector<int>nums={1,1,2,4,4,5,5};
    func(nums);
    return 0;
}