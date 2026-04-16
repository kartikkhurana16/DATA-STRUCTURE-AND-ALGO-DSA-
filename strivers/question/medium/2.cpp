#include<iostream>
#include<vector>
using namespace std;
int fun(  vector<int>&arr){
    int n=arr.size();
    int k=2;
    for(int i=2;i<n;i++)
    {
        if(arr[i]!=arr[k-2]){
            arr[k]=arr[i];
            k++;
        }
    }
}
int main(){
    vector<int>arr={1,1,1,2,2,2,3};
    int n=arr.size();
    fun(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}