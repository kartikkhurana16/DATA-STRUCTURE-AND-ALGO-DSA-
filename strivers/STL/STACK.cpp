#include<bits/stdc++.h>
using namespace std;
void start()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    s.pop();
    s.pop();
    
    cout<<s.size();
    cout<<s.empty()<<endl;
    
    stack<int>st1,st2; 
    st1.push(1);
    st1.push(2);
    st2.push(3);
    st1.swap(st2);

    cout<<st1.top();
    cout<<st2.top();
}
int main()
{   
    start();
    return 0;
}