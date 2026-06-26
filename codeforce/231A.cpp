#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    int A,B,C;
    for(int i=0;i<n;i++){
        cin>>A>>B>>C;
        if(A+B+C>1){
            count++;
        }
    }
    cout<<count;
    return 0;
}