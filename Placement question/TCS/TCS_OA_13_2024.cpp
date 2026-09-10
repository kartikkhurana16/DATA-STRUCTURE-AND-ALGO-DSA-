#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> temp(n + 2, 0);
    for(int i = 0; i < n; i++){
        temp[arr[i]]++;
    }
    for(int i = 1; i <= n + 1; i++){
        if(temp[i] == 0){
            cout << i;
            break;
        }
    }
    return 0;
}