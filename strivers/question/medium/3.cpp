#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,int target)
{
    int n=arr.size();
    int right=0;
    int sum=0;
    int len=INT_MAX;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while(sum>=target){
            len=min(len,i-right+1);
            sum-=arr[right];
            right++;
        }
    }
    cout<<len;
}
int main()
{
    vector<int>arr={1,2,3,4,2};
    int target=4;
    func(arr,target);
    return 0;
}