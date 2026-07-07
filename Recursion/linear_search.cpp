#include<bits/stdc++.h>
using namespace std;

void solve(int k,int arr[],int i,int n){
    if(i==n){
        cout<<"NO";
        return ;
    }
    if(arr[i]==k){
        cout<<"YES";
        return;
    }
    return solve(k,arr,i+1,n);
    
}
int main(){
    int target=10;
    int arr[]={1,2,3,4,5,6};
    int n=6;
    solve(target,arr,0,5);
    return 0;
}