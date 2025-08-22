#include<bits/stdc++.h>
using namespace std;
int i=0;
void start(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    start(n-1);
}
int main()
{
    int n;
    cout<<"enter how many number u want to print";
    cin>>n;
    start(n);
    return 0;
}