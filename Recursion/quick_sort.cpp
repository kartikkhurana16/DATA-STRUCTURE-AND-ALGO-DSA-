#include<bits/stdc++.h>
using namespace std;
int quickfunc(vector<int>&arr,int left,int right){
    int pivot=arr[left];
    int i=left;
    int j=right;
    while(i<j){
        while(i<=right && arr[i]<=pivot){
            i++;
        }

    while(j > left && arr[j] > pivot){
        j--;
    }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[left],arr[j]);
    return j;
}
void func(vector<int>&arr,int left,int right){
    
    if(left<right){
        int partition=quickfunc(arr,left,right);
        func(arr,left,partition-1);
        func(arr,partition+1,right);
    }

}
int main(){
    vector<int>arr={5,2,9,7,6,1,4,3,8};
    func(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}