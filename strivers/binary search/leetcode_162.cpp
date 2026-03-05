#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &nums,int n){
    if(n==1) {
        cout<< 0;
    } 
    if(nums[n-1]>nums[n-2]){
        cout<<n-1;
    }
    if(nums[0]>nums[1]){
        cout<<0;
    }
    int low=0;
    int high=n-1;
    while (low<high)
    {
        int mid(low+(high-low)/2);
        if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1]){
            cout<<mid<<"  "<<nums[mid];
            break;
        }
        else if(nums[mid]>nums[mid-1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
}
int main(){
    vector<int>nums={1,2,3,4,5,7,1};
    int n=nums.size();
    func(nums,n);
}