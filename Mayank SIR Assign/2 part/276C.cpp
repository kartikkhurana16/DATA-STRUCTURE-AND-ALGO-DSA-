#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<long long>freq(n+2);
    while(m--){
        int l,r;
        cin>>l>>r;
        freq[l]++;
        freq[r+1]--;
    }
    
    for(int i=1;i<=n;i++){
        freq[i]+=freq[i-1];
    }
    sort(arr.begin(),arr.end());
    sort(freq.begin()+1,freq.end()-1);

    long long ans=0;
    for(int i=1;i<=n;i++){
        ans+=freq[i]*arr[i-1];
    }
    cout<<ans;
    return 0;
}