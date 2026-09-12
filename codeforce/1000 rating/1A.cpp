#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long x = (n + k - 1) / k;
    long long y = (m + k - 1) / k;
    cout<<x*y;
    return 0;
}