#include<bits/stdc++.h>
using namespace std;
int i=0;
void start()
{
    if(i==5)
    {
        return;
    }
    cout<<"kartik";
    i++;
    start();
}
int main()
{
    start();
    return 0;
}