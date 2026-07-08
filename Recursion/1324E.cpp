#include<bits/stdc++.h>
using namespace std;
int n;
int h;
int l,r;

vector<int>sleep(n);
int f(int x,int time){
    if(x==n){
        return 0;
    }
    int NsOp1=0;
    int NsOp2=0;
    
    int sleeptime1=(sleep[x]+time)%h;
    int sleeptime2=(time+sleep[x]-1)%h;

    if(sleeptime1>=l && sleeptime1<=r){
        NsOp1=1;
    }
    if(sleeptime2>=l && sleeptime2<=r){
        NsOp2=1;
    }

    int op1=NsOp1+(f(x+1,sleeptime1));
    int op2=NsOp2+(f(x+1,sleeptime2));

    int ans=max(op1,op2);
 return ans;
}
int main(){

    cin>>n>>h>>l>>r;

    sleep.resize(n);

    for(int i=0;i<n;i++)

        cin>>sleep[i];

    cout<<f(0,0);

}