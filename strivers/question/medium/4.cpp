#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr)
{
   
   int n=arr.size();
   vector<int>ans(n,0);
   int k=0;
   int j=1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[k]=arr[i];
            k+=2;
        }
        else{
            ans[j]=arr[i];
            j+=2;
        }
    }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
}
int main()
{
    vector<int>arr={2,4,5,-1,-3,-4};
    func(arr);
    return 0;
}