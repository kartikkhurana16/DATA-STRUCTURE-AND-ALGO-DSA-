#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&arr){
    int n=arr.size();
    int leftsum=0;
    int rightsum=accumulate(arr.begin(),arr.end(),0);
    for(int i=0;i<n;i++){
        rightsum-=arr[i];
        if(rightsum==leftsum){
            cout<<i;
        }
        leftsum+=arr[i];
    }
}
int main()
{
    vector<int> arr={1,7,3,6,5,6};
    pivot(arr);
    return 0;
}