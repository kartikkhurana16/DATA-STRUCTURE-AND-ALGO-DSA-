#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
    void func(int index,vector<int>&arr){
        if(index==arr.size()){
            ans.push_back(arr);
            return ;
        }
        for(int i=index;i<arr.size();i++){
            swap(arr[i],arr[index]);
            func(index+1,arr);
            swap(arr[i],arr[index]);
        }
    }
int main(){
    vector<int>arr={1,2,3};
    func(0,arr);

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }
            cout<<endl;

        }
    return 0;
}