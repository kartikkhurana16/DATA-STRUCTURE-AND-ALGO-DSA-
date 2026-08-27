#include<bits/stdc++.h> 
using namespace std;
int main(){
    string a="aababbcaacc";
    int k=2;

unordered_map<char,int>mp;
   int l=0;int r=0;
   int maxsum=0;
   while(r<a.length()){
    mp[a[r]]++;
        if(mp.size() > k) {
            mp[a[l]]--;
            if(mp[a[l]] == 0) {
                mp.erase(a[l]);
            }
            l++;
        }
       if(mp.size()<=k){
            maxsum=max(maxsum,r-l+1);
       }
        r++;
   }
    cout<<maxsum;
    return 0;
}