#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    int m;

    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
  
     
    for(int i=0;i<n;i++){
     cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());

    vector<int>ans;

    for(int i=0;i<m;i++){
        int left=0;
        int right=n;
        while(left<right){
            int mid=left+(right-left)/2;
            if(arr1[mid]<=arr2[i]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        cout<<left<<" ";
    }

    return 0;
}