#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int count=0;
    int temp=0;
    int i=0;
    sum=sum/2;
    while(i<arr.size() && temp<=sum){
        temp+=arr[i];
        count++;
        i++;
    }
    cout<<count;
    
    return 0;
}