#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    string str;
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin>>ch;
        str+=ch;
    }
    for(int i=1;i<n;i++){

        if(str[i]==str[i-1]) count++;
    }
    cout<<count;
    
    return 0;
}