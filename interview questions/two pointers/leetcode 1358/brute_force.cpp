#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr="abcabc";

    int count=0;
    
    for(int i=0;i<arr.length();i++){
        vector<int>temp(3,0);
        for(int j=i;j<arr.length();j++){
            temp[arr[j]-'a']=1;

            if(temp[0]+temp[1]+temp[2]==3){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}