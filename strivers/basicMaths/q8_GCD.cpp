#include<bits/stdc++.h>
using namespace std;
int GCD=1;
void start(int n1,int n2)
{
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            GCD=i;
        }
    }
    cout<<GCD;
}
int main()
{
    int n1,n2;
    cout<<"enter the firt GCD NO ";
    cin>>n1;
    cout<<"enter the sec GCD NO ";
    cin>>n2;
    
    start(n1,n2);
    return 0;
}

