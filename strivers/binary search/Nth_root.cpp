#include<bits/stdc++.h>
using namespace std;
int sqaure(int mid, int Nth){

    for(int i=1;i<Nth;i++){
        mid=mid*mid;
    }
    return mid;

}
int check(int ans,int Nth){
    for(int i=0;i<Nth;i++){
        ans=ans*ans;
    }
    return ans;

}
void func(int sqr,int Nth){
    int left=1;
    int high=sqr/2;
    long long ans=1;
    while (left<=high){
        long long mid=left+(high-left)/2;
        if(sqaure(mid,Nth)<=sqr){
            ans=mid;
            left=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(check(ans,Nth)==sqr) {
        cout<<ans;
    }
    else{
        cout<<-1;
    }
}
int main(){
    int sqr;
    cin>>sqr;
    int Nth;
    cin>>Nth;
    func(sqr,Nth);
}