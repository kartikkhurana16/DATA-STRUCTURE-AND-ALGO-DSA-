#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string temp="hello";
    int j=0;
    for(int i=0;i<str.length();i++){
      if(j<temp.length() && str[i]==temp[j]){
        j++;
      }
    }
    if(j==temp.length())
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}