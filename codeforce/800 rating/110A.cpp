#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    string temp = to_string(n);

    int count = 0;

    for(int i = 0; i < temp.length(); i++){
        if(temp[i] == '4' || temp[i] == '7'){
            count++;
        }
    }

    if(count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}