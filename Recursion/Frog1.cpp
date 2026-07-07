#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>arr;
int func(int x){
    if(x==n-1){
        return 0;
    }

    int opt1=func(x+1)+abs(arr[x]-arr[x+1]);
    int opt2=1e6;
    if(x+2<n){
        opt2=func(x+2)+abs(arr[x]-arr[x+2]);
    }
    int ans=min(opt1,opt2);
    return ans;
}
int main(){

    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=func(0);
    cout<<ans;
    return 0;
}