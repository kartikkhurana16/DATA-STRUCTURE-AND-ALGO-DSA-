#include<bits/stdc++.h>
using namespace std;
        int n=4;
        int m=4;
        vector<vector<int>>matrix = {
    {1, 1, 1, 1},
    {1, 0, 0, 1},
    {1, 1, 0, 1},
    {1, 1, 1, 1},
};;
void func(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
              
            }
        }
    }

}
int main(){
        
    func();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" | ";
        }
        cout<<endl;
    }
    return 0;
}