#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
void solve(int col,vector<string>&board,vector<int>&leftrow,vector<int>&upperdiagt,vector<int>&lowerdiagt,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0 && upperdiagt[row+col]==0 && lowerdiagt[(n-1)+col-row]==0){
            board[row][col]='Q';
            leftrow[row]=1;
            upperdiagt[row+col]=1;
            lowerdiagt[(n-1)+col-row]=1;
            solve(col+1,board,leftrow,upperdiagt,lowerdiagt,n);
            board[row][col]='.';
            leftrow[row]=0;
            upperdiagt[row+col]=0;
            lowerdiagt[(n-1)+col-row]=0;

        }
    }
}

void func(int n){
    vector<string>board(n);
    vector<vector<string>>ans;
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    } 
    vector<int>leftrow(n,0);
    vector<int>upperdiagt(2*n-1,0);
    vector<int>lowerdiagt(2*n-1,0);

    solve(0,board,leftrow,upperdiagt,lowerdiagt,n);

}
int main(){
    int n;
    cin>>n;
    func(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<"  |  ";
        }
        cout<<endl;
    }
    return 0;
}