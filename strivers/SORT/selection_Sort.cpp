#include<bits/stdc++.h>
using namespace std;
void start(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
   int min=i;
    for(int j=i+1;j<=n;j++)
    {
        if(arr[j]<arr[min]) {
        min=j;
        }
    }
    swap(arr[min],arr[i]);
    // int temp=arr[min];
    // arr[min]=arr[i];
    // arr[i]=temp;
    

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