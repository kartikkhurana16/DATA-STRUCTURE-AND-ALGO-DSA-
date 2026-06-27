#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=1;
    int ans=1;
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            count++;
        }
        else {
            count=1;
        }
        ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}