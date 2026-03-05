#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&nums , int h){
    int low=1;
    int high=*max_element(nums.begin(), nums.end());
    int n=nums.size();
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%mid==0){
                sum+=nums[i]/mid;
            }
            else{
                sum+=(nums[i]/mid)+1;
            }
        }
        if(sum<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low;
    
}
int main(){
    vector<int>nums={30,11,23,4,20};
    int h;
    cin>>h;
    func(nums,h);
    return 0;
}