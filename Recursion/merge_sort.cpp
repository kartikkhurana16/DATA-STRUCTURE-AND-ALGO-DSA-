#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&arr,int l,int mid,int r){
    vector<int>ans;
    int left=l;
    int right=mid+1;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=r){
        ans.push_back(arr[right]);
        right++;
    }

   for(int i=l,j=0;i<=r;i++,j++)
    arr[i]=ans[j];
}
void divide(vector<int>&arr,int l,int r){  
    if(l>=r){
        return;
    }  
    int mid=l+(r-l)/2;
    
    divide(arr,l,mid);
    divide(arr,mid+1,r);
    func(arr,l,mid,r);

    

} 
int main(){
    int left=0;
    vector<int>arr={3,5,6,2,7,9,1};
    int right=arr.size()-1;
    divide(arr,left,right);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}