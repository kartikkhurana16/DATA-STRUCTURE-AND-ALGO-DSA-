#include<bits/stdc++.h>
using namespace std;
int ncr(int n)
{
    int res=1;
    cout<<res<<" ";
    for(int i=0;i<n;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
        cout<<res<<" ";
    }
}
int main()
{
    ncr(4);
    return 0;
}
