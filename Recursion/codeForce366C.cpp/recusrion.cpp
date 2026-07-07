#include<bits/stdc++.h>
using namespace std;
const int N=102;
int n,k;
    int taste[N];
    int calories[N];

int f(int x,int s){
    if(x==n){
        if(s==0){
            return 0;
        }
        else{
            return -1e9;
        }
    }

    int op1=taste[x]+f(x+1,s+(taste[x]-(k*calories[x])));

    int op2=0+f(x+1,s);

    int ans=max(op1,op2);

return ans;
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>taste[i];
    }
    for(int i=0;i<n;i++){
        cin>>calories[i];
    }

    int ans=f(0,0);
    if(ans<=0){
        cout<<"-1";
        return 0;
    }
    else{
        cout<<ans;
    }
    return 0;
}