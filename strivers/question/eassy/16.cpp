#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&nums){
    int n=nums.size();
    int startValue=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum<startValue){
            startValue=sum;
        }
    }
    cout<<(-startValue)+1;    
}
int main()
{
    vector<int> arr={-3,2,-3,4,2};
    pivot(arr);
    return 0;
}