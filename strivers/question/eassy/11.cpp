#include<bits/stdc++.h>
using namespace std;
int  show(vector<int>&arr1, vector<int> &arr2)
{
    int n=arr1.size();
    int m=arr2.size();
    set<int>inter={};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]=arr2[j])
            {
                inter.insert(arr1[i]);
            }
        }
    }
    for(int it:inter)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vector<int> arr1={1,2,3,4,5,2,3,4,5};
    vector<int> arr2={1,3,3,3,3,3,5,5,5,5,5,5};
    
    show(arr1,arr2); 
    return 0;
}
