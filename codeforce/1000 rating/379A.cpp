#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=a;
    // int sum=a/b;
    while(a>=b){
        int sum=a/b;
        count+=sum;
        a=a%b+sum;
    }
    cout<<count;
    return 0;
}