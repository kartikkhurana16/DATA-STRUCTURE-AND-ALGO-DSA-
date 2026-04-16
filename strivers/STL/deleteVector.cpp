#include<bits/stdc++.h>
using namespace std;
void start()
{
    vector<int>v={1,2,3,4};
    v.erase(v.begin());
    for(auto it:v)
    {
    cout<<it;
    }
}
int main()
{
    start();
    return 0;
}