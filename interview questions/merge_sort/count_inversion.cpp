#include<bits/stdc++.h>
using namespace std;
int incount=0;
vector<int> merge(vector<int>&arr,int left,int mid,int right){
    vector<int>temp;
    int low=left;
    int high=mid+1;

    while(low<=mid && high<=right){
        if(arr[low]<=arr[high]){
            temp.push_back(arr[low]);
            low++;
        }

        else{
            temp.push_back(arr[high]);
            incount+=mid-low+1;
            high++;
        }
    }
    while(low<=mid){
        temp.push_back(arr[low]);
        low++;
    }
    while(high<=right){
        temp.push_back(arr[high]);
        high++;
    }
    return temp;
}
void mergesort(vector<int>&arr,int left,int right){
    if(left>=right) return;
    int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
    
    merge(arr,left,mid,right) ;
}
    
int main(){
   
    vector<int>arr={2, 3, 7, 1, 3, 5};
    mergesort(arr,0,arr.size()-1);
    cout<<incount;
    return 0;
}