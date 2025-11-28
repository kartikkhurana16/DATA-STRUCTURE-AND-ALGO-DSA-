/*    brute force

#include<bits/stdc++.h>
using namespace std;
int start( vector<int>arr,int n)
{
for(int i=0;i<n;i++)
{
    int min=i;
    for(int j=i+1;j<n-1;j++)
    {
    if(arr[j]<arr[min])
    {
        min=j;
    }
    }
swap(arr[min],arr[i]);
}
for(int i=0;i<=n-1;i++){
cout<<arr[i]<<" ";
}
int largest=arr[n-1];
int sec;
for(int i=n-1;i>0;i--)
{
    if(arr[i]!=largest)
    {
      sec=arr[i--];  
      break;
    }
}
cout<<endl<<"second largest ="<<sec;
}
int main()
{
    vector<int>arr={3,6,5,1,7,7};
    int n=arr.size();
    start(arr,n);
    return 0;
}
    */

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
int sec=-1;
for(int i=0;i<n;i++)
{
    if(arr[i]>sec && arr[i]!=largest)
    {
        sec=arr[i];
    }
}
cout<<sec;
}
int main()
{
    vector<int>arr={3,6,5,1,7};
    int n=arr.size();
    start(arr,n);
    return 0;
}