#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<string> names={
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
    };
    long long count=1;
    while(n>5*count){
        n-=5*count;
        count*=2;
    }
    int index=(n-1)/count;
    cout<<names[index];
    return 0;
}