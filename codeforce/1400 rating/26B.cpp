#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char>st;
    int count=0;
    for(char ch: str){
        
        if(ch=='('){
            st.push(ch);
        }
        else if(ch==')' && !st.empty()){
            st.pop();
            count+=2;
        }
    
    }
    cout<<count;
    return 0;
}