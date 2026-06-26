#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>arr;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            arr.push_back(str[i]);
        }
    }
    sort(arr.begin(),arr.end());
    int j=0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            str[i]=arr[j++];
        }
    }
    cout<<str;
    return 0;
}