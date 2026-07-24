#include <bits/stdc++.h>
using namespace std;
int n;
void func(int curr){

    if(curr>n){
        return;
    }
    cout<<curr<<" ";
    for(int i=0;i<=curr;i++){
        func(curr*10+i);
    }
}
int main() {
    cin >> n;
    cout<<0<<" ";
    for(int i=1;i<n;i++){
        func(i);
    }
    return 0;
}