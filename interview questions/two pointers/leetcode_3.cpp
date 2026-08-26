#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcabcbb";

    int ans=0;
    int left=0;
    unordered_map<char,int>mp;
    for(int k=0;k<s.length();k++){
        if(mp.find(s[k])!=mp.end() && mp[s[k]]>=left){
            left=mp[s[k]]+1;
        }
        mp[s[k]]=k;
        ans=max(ans,k-left+1);
    }
    cout<<ans;
    return 0;
}