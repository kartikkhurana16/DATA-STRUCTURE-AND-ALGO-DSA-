#include<bits/stdc++.h>
using namespace std;
int start(int i)
{
    if(i==0) return 0;
    return i + start(i-1);
}
int main()
{
    int i=5;
    cout<<start(i);
    return 0 ;
}