#include<bits/stdc++.h>
using namespace std;
bool func(string &s,string &goal,int index){
    int j=0;
    for(int i=index;i<=s.length();i++){
        if(s[i]!=goal[++j]){
            return false;
        }
    }
    for(int i=0;i<index;i++){
        if(s[i]!=goal[j++]){
            return false;
        }
    }
    return true;
}
int main(){
    string s="abcde";
    string goal="deabc";
    for(int i=0;i<s.size();i++){
        if(s[i]==goal[0]){
            func(s,goal,i);
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}