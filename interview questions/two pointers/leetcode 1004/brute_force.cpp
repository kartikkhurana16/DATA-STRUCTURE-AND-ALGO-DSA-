#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        int zeros=0;
        for(int j=i;j<arr.size();j++){
            if(arr[j]==0){
                zeros++;
            }
            if(zeros<=k){
                int len=j-i+1;
                maxlen=max(maxlen,len);
            }
            else{
                break;
            }
        }
    }
    cout<<maxlen;
    return 0;
}