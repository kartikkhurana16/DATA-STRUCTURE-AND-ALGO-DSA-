#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcde";
    string goal="deabc";
    for(int i=0;i<s.size();i++){
        rotate(s.begin(),s.begin()+1,s.end());
        if(s==goal){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}