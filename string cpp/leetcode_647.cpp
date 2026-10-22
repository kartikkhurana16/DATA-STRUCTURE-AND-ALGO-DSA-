#include<bits/stdc++.h>
using namespace std;
int main(){
    string st="aaaa";
    int ans=0;
    int l=0,r=0;
    int n=st.length();
    for(int i=0;i<n;i++){
        l=r=i;
        while(l>=0 && r<n && st[l]==st[r]){
            ans++;
            l--;
            r++;
        }
        l=i;
        r=i+1;
        while(l>=0 && r<n && st[l]==st[r])
        {
            ans++;
            l--;
            r++;
        }
    }
    cout<<ans;
    return 0;
}