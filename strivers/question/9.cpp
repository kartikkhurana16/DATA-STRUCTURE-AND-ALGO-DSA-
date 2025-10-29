#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&num1,vector<int>&num2,int n,int m)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(num1[i]);
    }
    
    for(int i=0;i<m;i++)
    {
        s.insert(num2[i]);
    }


    for(int i:s)
    {
       cout<<i<<" ";
    }
}
int main()
{
    vector<int>num1={1,3,3,5,6};
    vector<int>num2={2,3,4};
    int n=num1.size();
    int m=num2.size();
    
    show(num1,num2,n,m);
    return 0;
}