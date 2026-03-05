#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr,int n,int target)
{
for(int i=0;i<n;i++)
{
    if(arr[i]==target)
    {
        cout<<"target "<<i;
        break;
    }
}
}
int main()
{
    int target;
    cout<<"target ";
    cin>>target;
    vector<int>arr={1,9,2,8,3,7,4,6,5,0};
    int n=arr.size();
    show(arr,n,target);
    return 0;
}