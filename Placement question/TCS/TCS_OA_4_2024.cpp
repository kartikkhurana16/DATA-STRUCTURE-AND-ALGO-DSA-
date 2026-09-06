//You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.  
// Return the sum of all the unique elements of nums.


#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n=0;
    vector<int>arr={1,5,3,4,1,3,2};
    unordered_map<int,int>mp;
    int sum=0;
    for(int i=0;i<arr.size();i++)
{       
    if(mp.find(arr[i])!=mp.end()){
        sum-=arr[i];
    }else sum+=arr[i];
        mp[arr[i]]++;
}    
cout<<sum;
    return 0;

}