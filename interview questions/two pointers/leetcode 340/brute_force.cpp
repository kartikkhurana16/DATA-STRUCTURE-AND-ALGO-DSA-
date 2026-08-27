#include<bits/stdc++.h> 
using namespace std;
int main(){
    string a="abcddefg";
    int k=3;

    unordered_map<char,int>mp;
    // int count=0;
    int maxsum=0;
    for(int i=0;i<a.length();i++){
        mp.clear();
        for(int j=i;j<a.length();j++){
            mp[a[j]]++;
            if(mp.size()<=k){
                maxsum=max(maxsum,j-i+1);
            }
            else{
                break;
            }
        }
    }
    cout<<maxsum;
    return 0;
}