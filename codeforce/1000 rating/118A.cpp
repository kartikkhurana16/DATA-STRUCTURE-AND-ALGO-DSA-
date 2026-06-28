#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ans="";
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y') {
            ans += '.';
            ans += ch;
        }
    }
    cout<<ans;
    return 0;
}