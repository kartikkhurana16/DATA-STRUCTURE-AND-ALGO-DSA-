//Remove all the duplicate words from the string. 
//Duplicate words are the ones which occurs more than ones in a string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="hello people hello world";
    unordered_map<string,int>mp;
    string temp;
    string ans;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            if(mp[temp]==0){
                ans+=temp+" ";
                mp[temp]++;
            }
                temp="";
        }
        else{
            temp+=str[i];
        }
    }
    if(mp[temp]==0){
        ans+=temp;
    }
    
    cout<<ans;
    return 0;
}
//hello people hello world 
