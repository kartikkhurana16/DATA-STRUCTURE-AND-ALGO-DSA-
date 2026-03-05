#include<bits/stdc++.h>
using namespace std;
int start( vector<int>arr,int n)
{
int largest=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
cout<<largest;
}
int main()
{
    vector<int>arr={3,6,5,1,7};
    int n=arr.size();
    start(arr,n);
    return 0;
}