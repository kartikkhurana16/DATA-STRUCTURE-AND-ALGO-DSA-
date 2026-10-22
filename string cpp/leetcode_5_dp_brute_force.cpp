#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str){
    string temp=str;
    reverse(temp.begin(),temp.end());
    return str==temp;
}
int main(){
    string s="cbbd";
    int n=s.length();
    string ans="";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string temp=s.substr(i,j-i+1);
            if(ispalindrome(temp) && ans.length()<temp.length()){
                ans=temp;
            }
        }
    }
    cout<<ans;
    return 0;
}