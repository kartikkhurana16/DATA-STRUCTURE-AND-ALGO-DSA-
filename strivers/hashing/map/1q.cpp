#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxfreq=0;
        int maxEle=0;
    unordered_map<int ,int>mpp;
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"enter the array : ";
        cin>>arr[i];
        mpp[arr[i]]++;

        for(auto it:mpp)
        {
            int count=it.second;
            int element=it.first;
            
            if(count>maxfreq)
            {
                maxEle=element;
                maxfreq=count;
            }
        }
    }
    cout<<"highest calling number : "<<maxEle;
    return 0;
}