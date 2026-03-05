#include<bits/stdc++.h>
using namespace std;
int i=1;

void start(int n)
{
    if(i==n)
    {
        return;
    }
    cout<<i;
    i++;
    start(n);
}
int main()
{
    int n;
    cout<<"enter how many number u want to print";
    cin>>n;
    start(n);
    return 0;
}