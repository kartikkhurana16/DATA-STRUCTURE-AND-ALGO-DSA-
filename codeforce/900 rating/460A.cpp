#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i=1;
    int day=0;
    while(n>0){
        day++;
        if(i%m==0){
            n++;
        }
        i++;
        n--;
        
    }
    cout<<day;
    return 0;
}