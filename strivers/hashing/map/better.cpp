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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
           if(i!=j){
            swap(matrix[i][j],matrix[j][i]);
           }
        }
    }
   for(int i = 0; i < n; i++){
    reverse(matrix[i].begin(), matrix[i].end());
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