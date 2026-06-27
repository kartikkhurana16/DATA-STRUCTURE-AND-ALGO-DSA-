#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    vector<int>ques(m);
    for(int i=0;i<m;i++){
        cin>>ques[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=sum;
    }

    for(int i=0;i<m;i++){
        int temp=ques[i];
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((mid==0 || temp>arr[mid-1]) && temp<=arr[mid]){
                cout<<mid+1<<"\n";
                break;
            }
            if(temp<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        // for(int j=0;j<n;j++){
        //     if(temp<=arr[j]){
        //         cout<<j+1;
        //         break;
        //     }
        // }

    }
    return 0;
}