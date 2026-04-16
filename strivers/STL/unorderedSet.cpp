#include<bits/stdc++.h>
using namespace std;
void start()
{
    unordered_set<int>uns;
    uns.insert(1);
    uns.insert(7);
    uns.insert(3);
    uns.insert(5);
    uns.insert(3);
    uns.insert(2);

    for(auto it:uns)
    {
        cout<<it;
    }
}
int main()
{
    start();
    return 0;
}