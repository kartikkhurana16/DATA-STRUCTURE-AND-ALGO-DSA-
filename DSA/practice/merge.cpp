#include<bits/stdc++.h>
using namespace std;
int mergearr(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;

    while(left<=mid&&right<=high)
    {
        temp.push_back(arr[left++]);
    }
}
int merge(vector<int>&arr,int n)
{
    int low=arr[0];
    int high=arr[n-1];
    int mid=(low-high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,high,mid+1);
    mergearr(arr,low,mid,high);
}
int mergesort(vector<int>&arr,int low,int mid);
int main()
{
    vector<int>arr={3,1,4,2,5};
    int n=5;
    merge(arr,n);
    return 0;
}
