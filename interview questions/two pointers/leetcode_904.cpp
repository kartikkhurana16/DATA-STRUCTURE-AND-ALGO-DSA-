#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={0,1,2,2};
    unordered_map<int,int>mp;
    int l=0;
    int maxlen=0;
    int r=0;
    while(r<arr.size()){
        mp[arr[r]]++;
            if(mp.size() > 2) {
                mp[arr[l]]--;
                if(mp[arr[l]] == 0) {
                    mp.erase(arr[l]);
                }
                l++;
            }
        maxlen=max(maxlen,r-l+1);
        r++;
    }
    cout<<maxlen;
    return 0;
}