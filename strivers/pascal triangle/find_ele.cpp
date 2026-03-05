#include <bits/stdc++.h>
using namespace std;
int nrc(int n)
{
    int r=2;
    int res=1;
    for(int i=0;i<r;i++)
    { 
        res=res*(n-i);
        res=res/(i+1);
    }
     cout<<res;
    
}
int main(){
    int n=5;
    nrc(n);
}