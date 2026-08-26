#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="AABABBA";
    int k=2;
    int l=0;
    int count=0;
    int r=0;
    int maxlen=0;
    while(r<s.length()){
        if(s[l]!=s[r]){
            count++;
        }
        if(count>k){
            count--;
            l++;
        }
        if(count<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    cout<<maxlen;
    return 0;
}