#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,1};
    int k=3;
    int r=arr.size()-1;
    int sum=0;
    int lsum=0;
    int rsum=0;

    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }
    sum=lsum;
    for(int i=k-1;i>=0;i--){
        lsum-=arr[i];
        rsum+=arr[r];
        r--;

        sum=max(sum,lsum+rsum);
    }
    cout<<sum;
    return 0;
}