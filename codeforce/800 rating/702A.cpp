#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int currsum=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            currsum++;
        }
        else{
            currsum=1;
        }
        count=max(count,currsum);
    }

    cout<<count;
    return 0;
}