#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    int b;
    cin>>a>>b;
    int maxnum=max(a,b);
    int numerator=6-maxnum+1;
    int denominator=6;
    int g=gcd(numerator,denominator);
    numerator/=g;
    denominator/=g;
    

    cout<<numerator<<"/"<<denominator;
    
    return 0;
}
