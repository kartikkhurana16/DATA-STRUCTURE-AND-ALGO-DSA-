#include<bits/stdc++.h>
using namespace std;
void func(int sqr){
    int left=1;
    int high=sqr/2;
    int ans;
    while(left<high){
        int mid=(left+high)/2;
        if(mid*mid<=sqr){
            ans=mid;
            left=mid+1;
        }
        else{
            high=mid-1;
    }   
    cout<<ans;
}
}
int main(){
    int sqr;
    cin>>sqr;
    func(sqr);
}