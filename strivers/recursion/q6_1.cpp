#include<bits/stdc++.h>
using namespace std;
void start(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    start(i-1,sum+i);
}
int main()
{
    int n;
    cin>>n;
    start(n,0);
    return 0 ;
}