#include<bits/stdc++.h>
using namespace std;
int n,m;
char maze;
bool visit;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>maze[i][j];
            if(maze[i][j]=="X"){
                visit[i][j]=1;
            }
        }
    }
    
    return 0;
}