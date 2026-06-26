#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int curr=0;
    int j=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        while(curr>t){
            curr-=arr[j];
            j++;
        }
        count=max(count,i-j+1);
    }
    cout<<count;
    return 0;
}