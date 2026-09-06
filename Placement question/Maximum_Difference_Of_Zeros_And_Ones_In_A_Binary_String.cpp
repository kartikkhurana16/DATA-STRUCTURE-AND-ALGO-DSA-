#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int current=0;
    int ans=INT_MIN;
    for(char c:s){
        if(c=='0'){
            current+=1;
        }
        else{
            current-=1;
        }
        current=max(current,0);
        ans=max(ans,current);
    }
    cout<<ans;
    return 0;
}