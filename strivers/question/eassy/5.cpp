#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr,int n)
{
    int first=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;

    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{  
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    show(arr,n);

    return 0;
}