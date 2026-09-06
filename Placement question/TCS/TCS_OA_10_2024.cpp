/*Write a program that generates a modified password based on an initial password and an increment value, following these requirements:

The initial password must be at least 8 characters long.
It must contain at least:
One integer,
One special character from the set {'#', '@'},
One uppercase letter, and
One lowercase letter.
The program takes two inputs:

A string representing the initial password.
An integer n representing the number of times each character in the password should be incremented.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string pass;
    cin>>pass;
    for(int i=0;i<pass.length();i++){
        if(isdigit(pass[i])){
            cout<<pass[i]-'0'+2;
        }
        else if(isalpha(pass[i])){
            cout<<char(pass[i]+2);
        }
        else {
            cout<<char(pass[i]+2);
        }
    }
    return 0;
}