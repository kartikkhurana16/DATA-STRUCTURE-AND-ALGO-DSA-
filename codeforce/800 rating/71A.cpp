#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        int n=arr[i].length();
        if(n>10){
        string temp;
        temp+=arr[i][0];
        temp+=to_string(n-2);
        temp+=arr[i][n-1];
        arr[i]=temp;
    }
}
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}