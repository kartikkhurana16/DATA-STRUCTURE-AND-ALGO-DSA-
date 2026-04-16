#include<bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int currsum=0;
        int maxsum=nums[0];
        for(int i=0;i<n;i++){
            currsum=max(nums[i],nums[i]+currsum);
            maxsum=max(maxsum,currsum);
            cout<<maxsum<<"\n";
        }
        if(nums[n-1]==0){
            maxsum=max(maxsum,maxsum + nums[0]);
        }
        else{
            maxsum=max(maxsum,nums[n-1] + nums[0]);
        }
        cout<<maxsum;
    }
int main()
{
    // vector<int> arr={2,-2,2,7,8,0};
    vector<int> arr={1,-2,3,-2};
    maxSubarraySumCircular(arr);
    return 0;
}