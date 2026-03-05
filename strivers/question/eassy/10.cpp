#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr,int n)
{
    
    for(int i=0;i<=n;i++)
    {
        int  flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    vector<int>arr={1,3,4,5};
    int n;
    cin>>n;
    show(arr,n);
    return 0;
}
