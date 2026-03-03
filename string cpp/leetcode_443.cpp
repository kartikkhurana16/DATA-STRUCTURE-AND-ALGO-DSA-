#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[]={'a','a','a','a','a','a','a','a','a','a','a','a','a','a','b','b','b','b','b','b','b','b'};
    int index=0;
    int i=0;
    int n=sizeof(str);
    while(i<n){
        char curr=str[i];
        int count=0;
        while(i<n && curr==str[i]){
            count++;
            i++;
        }
        str[index]=curr;
        index++;
       if (count > 1) {
        string count_char = to_string(count);
        for(char ch : count_char){
            str[index]=ch;
            index++;
        }
    }
}
cout<<index;
}