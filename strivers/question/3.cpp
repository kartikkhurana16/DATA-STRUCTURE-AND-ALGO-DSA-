#include<bits/stdc++.h>
using namespace std;
int show(int arr[],int n)
{
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"array iss not sorted";
    }
    else{
         cout<<"array is sorted";
    }
}
int main()
{
    int n=5;
    int arr[n]={1,2,6,4,5};
    show(arr,n);
    return 0;
}