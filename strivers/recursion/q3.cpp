#include<bits/stdc++.h>
using namespace std;
void start(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    n--;
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