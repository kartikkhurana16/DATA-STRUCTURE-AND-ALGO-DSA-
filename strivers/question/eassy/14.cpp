//  #include<bits/stdc++.h>
// using namespace std;
// void start(vector<int>&arr,int n)
// {
    
//     int x=10;
//     int len=0;
//     for(int i=0;i<n;i++)
//     {
//         int s=0;
//         for(int j=i;j<n;j++)
//         {
//             s+=arr[j];
//             if(s == x) {
//             len=max(len,j-i+1);
//            } 
//         }
        
//     }cout<<len;
       
// }
// int main()
// {
//     vector<int>arr={10, 5, 2, 7, 1, 9};
//     int n=arr.size();
//     start(arr,n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int start(vector<int>&arr,int n)
{
    int k=7;
    map<long long,int>mpp;
    long long sum =0;
    int len=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            len=max(len,i+1);
        }
        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end())
        {
            int len2=i-mpp[rem];
            len=max(len,len2);
        }
        mpp[sum]=i;
    }
    return len; 
}
int main()
{
    vector<int>arr={10, 5, 2, 7, 1, 9};
    int n=arr.size();
    cout << start(arr, n);
    return 0;
}