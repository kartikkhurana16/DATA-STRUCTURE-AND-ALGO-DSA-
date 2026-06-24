#include<bits/stdc++.h>
using namespace std;
void func(string s,int k){
    int i=0;
    int freq=0;
    int maxlen=0;
    int hash[26]={0};
    for(int j=0;j<s.length();j++){
            hash[s[j]-'A']++;
            freq=max(freq,hash[s[i]-'A']);
            while((j-i+1)-freq>k){
                hash[s[i]-'A']--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        cout<<maxlen;
}
int main(){
    string s="AABABBA";
    int k=1;
    func(s,k);
    return 0;
}