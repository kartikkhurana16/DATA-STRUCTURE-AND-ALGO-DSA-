#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin, n);
    set<char>s;
    for(int i=0;i<n.length();i++){
        if (isalpha(n[i])){
            s.insert(n[i]);
        }
    }
    cout<<s.size();
    return 0;
}