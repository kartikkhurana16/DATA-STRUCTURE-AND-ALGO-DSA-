#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long count=(n/5);
    if(n%5==0){
        cout<<count;
    }
    else{
        cout<<count+1;
    }
    return 0;
}
