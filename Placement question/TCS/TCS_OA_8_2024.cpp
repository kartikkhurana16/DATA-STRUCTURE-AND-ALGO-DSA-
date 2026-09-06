// Given an integer n, return true if it is an Armstrong number; otherwise, return false.
// An Armstrong number is a number that equals the sum of its own digits, each raised to the power of the number of digits.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string temp=to_string(num);
    int n=temp.length();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pow((temp[i]-'0'),n);
    }
    if(sum==num) cout<<"true";
    else cout<<"false";
    return 0;
}