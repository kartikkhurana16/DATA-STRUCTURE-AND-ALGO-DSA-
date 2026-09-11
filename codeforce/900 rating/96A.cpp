#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str.length()<7){
        cout<<"NO";
        return 0;
    }
    int count=1;

    
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>=7){
        cout<<"YES";
         return 0;
        }
    }
    cout<<"NO";
    return 0;
}
