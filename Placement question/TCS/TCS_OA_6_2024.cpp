//Given an array of integers, nums, print all possible combinations of the elements in nums. Each combination should include any subset of elements, from the empty set to the entire array.


#include<bits/stdc++.h>
using namespace std;
void func(int i,vector<int>&ds,vector<int>&arr){
    if(i==arr.size()){
        cout<<"[";
        for(int j=0;j<ds.size();j++){
            cout<<ds[j];
            if(j!=ds.size()-1){
                cout<<", ";
            }
        }
        cout<<"]"<<endl;
        return;
    }
    ds.push_back(arr[i]);
    func(i+1,ds,arr);
    ds.pop_back();
    func(i+1,ds,arr);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ds;
    func(0,ds,arr);
return 0;
}