#include<bits/stdc++.h>
using namespace std;
void start()
{
    set<int>s;
    s.insert(1);
    s.insert(10);
    s.insert(4);
    s.insert(3);
    
    for(auto it:s)
    {
    cout<<it<<" ";
    }
    // auto it=s.find(11);
    // cout<<*it;
    auto it=s.find(10);
    cout<<*it;
    cout<<endl;
    s.upper_bound(2);
    // s.erase(10);
    s.upper_bound(2);
    for(auto it:s)
    {
    cout<<it<<endl;
    }
}
int main()
{
    start();
    return 0;
}