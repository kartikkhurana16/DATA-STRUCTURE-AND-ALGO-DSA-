#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        while(x%2==0){
            x/=2;
        }
        if(x==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }   
    return 0;
}