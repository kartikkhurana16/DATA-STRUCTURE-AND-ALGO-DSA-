#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {   
        int n,x,a,b;
        cin>>n>>x>>a>>b;

        int distance=abs(a-b);
        while(distance<n-1 && x--){    
            distance++;        
        }
        cout<<distance<<"\n";
    }
    return 0;
}
