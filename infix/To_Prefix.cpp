#include<bits/stdc++.h>
using namespace std;    
    string s="(a+b)*c-d+f";
    int i=0;
    stack<char>st;
    string ans;
    int n=s.length();

int priority(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}
string Reverse(string s){
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    s=Reverse(s);
    for (char &c : s) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }
    while(i<s.length()){
        if(s[i]>='A' && s[i]<='Z'||
            s[i]>='a' && s[i]<='z'||
            s[i]>='0' && s[i]<='9'){
                ans=ans+s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans=ans+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(s[i])<priority(st.top())){
                ans=ans+st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    ans=Reverse(ans);
    for(int j=0;j<ans.length();j++)
    {
        cout<<ans[j];
    }
        return 0;
}