#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr)
{
    int n=arr.size();
    int count=0;
    int max=0;

    for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        count=0;
    }
    else
    {
        count++;
        if(max<count)
        {
            max=count;
        }
    }   
}
cout<<max;
}
int main()
{
    vector<int>arr={1,1,0,1,1,1,1,1,0,1,1,1};
    show(arr);
    return 0;
}