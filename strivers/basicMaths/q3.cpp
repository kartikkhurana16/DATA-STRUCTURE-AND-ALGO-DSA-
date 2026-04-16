#include<bits/stdc++.h>
using namespace std;
int show=0;
int main()
{
    int i;
    cin>>i;
    int dup=i;
    while(i>0)
    {
        int k=i%10;
        i=i/10;
        show=(show*10)+k;
    }
    if(dup==show)
    {
        cout<<"it is palindrome";
    }
    if(dup!=show)
    {
        cout<<"it is not";
    }
    return 0;
}