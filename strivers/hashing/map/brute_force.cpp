#include<bits/stdc++.h>
using namespace std;
 int n=3;
    int m=3;
        vector<vector<int>>matrix = {
                                        {1, 2, 3},
                                        {4, 5, 6},
                                        {7, 8, 9}
                                    };
void func()
{
vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][m-1-i]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" | ";
        }
        cout<<endl;
    }
}

int main(){

    func();
    return 0;
}