#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>str={"flower","flow","flight"};
    string pref=str[0];
    for (int i = 1; i <str.size(); i++)
    {
        while(str[i].find(pref)!=0){
            pref=pref.substr(0,pref.length()-1);
        }
        if(pref.empty()) {
            cout<<" ";
            return 0;
        }
    }

    cout<<pref;
    return 0;
}