#include<bits/stdc++.h>
using namespace std;
void start(int arr[],int n)
{
for(int i=0;i<=n-1;i++)
{
    int j=i;
    while(j>0&& arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
    int arr[] = {50, 93, 76, 20, 40};
    start(arr,5);
    return 0;
}