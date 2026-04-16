#include<bits/stdc++.h>
using namespace std;
int i=0;
void start()
{
    if(i==4)
    {
        return;
    }
    cout<<i;
    i++;
    start();
}
int main()
{
    start();
    return 0;
}