#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
    }
    

    return 0;
}