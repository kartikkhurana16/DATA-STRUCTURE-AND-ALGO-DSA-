#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcabc";
    int count=0;
    for(int i=0;i<s.length();i++){
        vector<int>temp(3,0);
        for(int j=i;j<s.length();j++){
            temp[s[j]-'a']=1;

            if(temp[0]+temp[1]+temp[2]==3){

                count+=s.length()-j;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}