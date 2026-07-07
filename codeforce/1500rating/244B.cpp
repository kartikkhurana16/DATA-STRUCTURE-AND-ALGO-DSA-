#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i-1]){
            left=i+1;
        }
    }
    return 0;
}