#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int count=0;
    for(int i=0;i<x.length();i++){
        if(islower(x[i])){
            count++;
        }
        else{
            count--;
        }
    }
    if(count>=0){
        for(char &ch :x){
            ch=tolower(ch);
        }
    }
    else{
        for(char &ch :x){
            ch=toupper(ch);
        }
    }
   cout<<x;
    
    return 0;
}