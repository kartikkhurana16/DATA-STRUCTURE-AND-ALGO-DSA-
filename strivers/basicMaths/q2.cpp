#include<bits/stdc++.h>
using namespace std;
int n=4339,row=0;
int main()
{
    while (n>0)
    {
        int i=n%10;
        row=(row*10)+i;
        n=n/10;
    }
    cout<<endl<<row;
    return 0;
}