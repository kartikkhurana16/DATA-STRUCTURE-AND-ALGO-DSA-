#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,int goal){
    if(goal<0) return 0;
    int l=0;
    int r=0;
    int count=0;
    int sum=0;
    while(r<arr.size()){
        sum+=arr[r]%2;
        while(sum>goal){
            sum-=arr[l]%2;
            l++;
        }
        count+=r-l+1;
        r++;
    }
    return count;
}
int main(){

    vector<int>arr={1,1,2,1,1};
    int goal=3;
    cout<<func(arr,goal)-func(arr,goal-1);
    return 0;
}