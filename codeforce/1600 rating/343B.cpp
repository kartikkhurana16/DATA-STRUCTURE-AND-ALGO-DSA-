#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char>st;
    for(int i=0;i<str.length();i++){
        if(!st.empty() && str[i]==st.top() ){
            st.pop();
        }
        else{
            st.push(str[i]);
        }
    }
    if(st.empty()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}