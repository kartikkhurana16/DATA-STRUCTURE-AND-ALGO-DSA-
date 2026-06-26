#include<iostream>
using namespace std;
int main(){
    int n;
    string op;
    int X=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>op;
        if(op=="X++") X++;
        else if(op=="++X") ++X;
        else if(op=="X--") X--;
        else if(op=="--X") --X;
    }
    cout<<X;
    return 0;
}