#include <bits/stdc++.h>
using namespace std;
int func(vector<int>&piles,int mid){
    long long sum=0;
    for(int i=0;i<piles.size();i++){
        if(piles[i]%mid==0){
            sum+=piles[i]/mid;
        }
        else{
            sum+=(piles[i]/mid)+1;
        }
    }
    return sum;
}
int main() {
    int  h;
    cin >> h;

    vector<int> piles={3,6,7,11};
    int i=1;
    int n=*max_element(piles.begin(),piles.end());
    while(i<=n){
        int mid=i+(n-i)/2;
        int sum=func(piles,mid);
        if(sum<=h){
            n=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<i;
    return 0;
}