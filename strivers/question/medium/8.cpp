#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&nums,int k){
    int n=nums.size();
    int sum=0;
    int rem=0;
    vector<int> arr(k);
    arr[0]=1;
   for(int i=0;i<n;i++){
            sum = ((sum + nums[i]) % k + k) % k;
            rem += arr[sum];
            arr[sum]++;

    cout<<rem;
    }
   
}
int main(){
    vector<int> nums={4,5,0,-2,-3,1};
    int k=5;
    func(nums,k);
    return 0;
}