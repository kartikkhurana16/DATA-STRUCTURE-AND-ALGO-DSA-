#include<bits/stdc++.h>
using namespace std;
// int n;

// int func(int a,int b,int n){
//     if(a>n||b>n){
//         return 1e6;
//     }
//     if(a==n || b==n) {

//         return 0;
//     }
//     int left=func(a,b+a,n);
//     int right=func(a+b,b,n);

//     return 1+min(right,left);
// }
// int main(){
//     cin>>n;
//     cout<<func(1,1,n);
//     return 0;
// } 
const int INF=1e9;
int solve(int a,int b){
    if(a==1 && b==1) return 0;
    if(a==0 || b==0 || a==b) return INF;

    int left=0;
    int right=0;
   if(a-b>0){
    int k = (a-1)/b;
    left = k + solve(a-k*b,b);
    return left;
}
else{
    int k = (b-1)/a;
    right = k + solve(a,b-k*a);
    return right;
}
}
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    int ans=INT_MAX;
    for(int i=1;i<n;i++){
        ans=min(ans,solve(n,i));
        ans=min(ans,solve(i,n));
    }
    cout<<ans;
    return 0;
}