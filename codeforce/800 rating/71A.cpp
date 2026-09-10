#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n>0){
        string str;
        cin>>str;
        if(str.length()>10){
            string temp="";
            int l=0;
            int r=str.length()-1;
            temp+=str[l];
            temp+=to_string(str.length()-2);
            temp+=str[r];
            cout<<temp;
        }
        else{
            cout<<str;
        }
        cout<<endl;
        n--;
    }
    return 0;
}
