#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr,int n,int k)
{
    vector<int>temp;
    for(int i=0;i<k;i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=0;i<n-k;i++)
    {
        arr[i]=arr[i+k];
    }
   for(int i = 0; i < k; i++)
   {
    arr[n - k + i] = temp[i];

    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{  int k;
    cin>>k;
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    show(arr,n,k);

    return 0;
}