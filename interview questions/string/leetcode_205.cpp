#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="egg";
    string t="add";
    if(s.length()!=t.length()) {
        cout<<"not compatitable"; 
        return 0;
    }
    unordered_map<char,char>st,ts;
    for(int i=0;i<s.length();i++){
        char a=s[i];
        char b=t[i];
        if(st.count(a) && st[a]!=b) {
            cout<<"not compatitable";
            return 0;
        }
        if(ts.count(b) && ts[b]!=a) {
            cout<<"not compatitable";
            return 0;
        }
        st[a]=b;
        ts[b]=a;
    }
   cout<<"compatitable";
    return 0;
}