#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    vector<int>arr(26,0);
    for(int i=0;i<str.length();i++){
        
        if(arr[str[i]-'a']==0){
            count++;
        }
        arr[str[i]-'a']++;
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
