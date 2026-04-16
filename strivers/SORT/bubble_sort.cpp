#include<bits/stdc++.h>
using namespace std;
void start(int arr[],int n)
{
for(int i=n-1;i>=1;i--)
{
    for(int j=0;j<=i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            
        }
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