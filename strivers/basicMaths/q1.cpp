#include<bits/stdc++.h>
using namespace std;
long long n=77245345433428342429;
int flag=0;
int main()
{
    while (n>0)
    {
        n/=10;
        flag++;
    }
    
    cout<<flag;
    return 0;
}