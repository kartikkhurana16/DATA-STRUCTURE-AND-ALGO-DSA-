#include<bits/stdc++.h>
using namespace std;
int main(){

    string n,t;
    getline(cin, n);
    getline(cin, t);
    int j=t.length()-1;
    if(n.length()!=t.length()) {
        cout<<"NO";
        return 0;
    }
        for(int i=0;i<n.length();i++){
        if(n[i]!=t[j]){
            cout<<"NO";
            return 0;
        }
        j--;
    }
    cout<<"YES";
    return 0;
}