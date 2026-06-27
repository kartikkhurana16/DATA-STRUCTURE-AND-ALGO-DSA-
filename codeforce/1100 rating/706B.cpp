#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int day;
    cin>>day;
    vector<int>arr2(day);
    for(int i=0;i<day;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<day;i++){
        int low=0;
        int right=n-1;
        while(low<=right){
            int mid=low+(right-low)/2;
            if(mid == 0) {
                if(arr2[i] < arr[0]) {
                cout << 0 << "\n";
                break;
            }
        }
            if(mid>0 && arr2[i]>=arr[mid-1] && arr2[i]<arr[mid]) {
                cout<<mid<<"\n";
                break;
            }
            if(mid == n - 1 && arr2[i] >= arr[n-1]) {
            cout << n << "\n";
            break;
        }
            if(arr2[i]<arr[mid]){
                right=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return 0;
}


// 5
// 3 10 8 6 11
// 4
// 1
// 10
// 3
// 11