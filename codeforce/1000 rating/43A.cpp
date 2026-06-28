#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        mp[temp]++;
    }
    string win;
    int ans=0;
    for(auto it:mp){
        if(ans<it.second)
        {
            ans=it.second;
            win=it.first;
    }
}
cout<<win;
return 0;
}