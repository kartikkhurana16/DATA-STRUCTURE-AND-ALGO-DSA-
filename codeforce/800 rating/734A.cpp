#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string str;
    cin >> str;

    int count = 0;

    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            count++;
        }
        else{
            count--;
        }
    }

    if(count > 0){
        cout << "Anton";
    }
    else if(count < 0){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }

    return 0;
}