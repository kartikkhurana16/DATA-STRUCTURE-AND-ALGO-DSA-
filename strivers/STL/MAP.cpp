#include<bits/stdc++.h>
using namespace std;
void start()
{
    map<int,int>m;
    m[1]=2;
    m.insert({1,4});
    m.emplace(3,5);
    m.emplace(4,6);
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
void start2()
{
    map<pair<int,int>,int>m;
    m[{2,3}]=10;
    for(auto it:m)
    {
        cout<<it.first.first<<" "<<it.first.second<<"-"<<it.second<<endl;
    }
}
int main()
{
    start2();
    start();
    return 0;
}

/* MULTI_MAP ===    i>  sorted
                    ii> duplicate keys

    UNORDERED_MAP == i> randomized
                    ii> duplicate keys

*/