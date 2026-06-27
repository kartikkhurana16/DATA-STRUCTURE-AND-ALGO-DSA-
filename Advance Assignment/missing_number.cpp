#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int ans[n]={0};
    for(int i=0;i<n-1;i++){
        ans[arr[i]-1]++;
    }
    for(int i=0;i<n;i++){
       if(ans[i]==0){
        cout<<i+1;
        break;
       } 
    }
    return 0;
}