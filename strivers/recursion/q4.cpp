#include<bits/stdc++.h>
using namespace std;
void start(int n)
{
    if(n<1)
    {
        return;
    }
    start(n-1);
    cout<<n;
}
int main()
{
    int n;
    cout<<"enter how many number u want to print";
    cin>>n;
    start(n);
    return 0;
}