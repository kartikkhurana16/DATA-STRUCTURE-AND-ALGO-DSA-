#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&nums,int n){

    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    cout<<nums[low];
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2}; 
    int n=nums.size();
    func(nums,n);
    return 0;
}