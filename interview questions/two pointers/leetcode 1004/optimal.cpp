#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;
    int maxlen=0;
    int zero=0;
    int l=0;
    int r=0;
    while(r<arr.size()){
    
        if(arr[r]==0){
             zero++;
        }
        while(zero>k){
            if(arr[l]==0){
                zero--;
            }
               l++;
        }
        if(zero<=k){
            int len=r-l+1;
            maxlen=max(len,maxlen);
        }
        r++;
    }
    cout<<maxlen;

    return 0; 
}