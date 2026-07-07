#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&arr,int i,int sum){
    if(i>=arr.size()){
        cout<<sum;
        return;
    }
    func(arr,i+1,sum+arr[i]);
    
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int sum=0;
    func(arr,0,0);
    return 0;
}