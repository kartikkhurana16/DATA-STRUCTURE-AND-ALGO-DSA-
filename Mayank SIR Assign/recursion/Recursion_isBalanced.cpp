#include<bits/stdc++.h>
using namespace std;
void func(int i,string &x, stack<char>st){
    if(i==x.length()){
        return;
    }
    if(x[i]=='[' || x[i]=='{' || x[i]=='(')
    {
        st.push(x[i]);

    }
   
    else{
        if(st.empty()){
            return;
        }
        if(x[i]==']' && st.top()=='[' || x[i]==')' && st.top()=='(' || x[i]=='}' && st.top()=='{'){
            st.pop();
        }
    }
      func(i+1,x,st);
    
}
int main(){
    string x;
    cin>>x;
    stack<char>st;
    func(0,x,st);
    cout << (st.empty() ? "true" : "false");
    return 0;
}