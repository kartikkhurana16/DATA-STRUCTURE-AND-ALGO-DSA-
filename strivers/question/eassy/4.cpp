#include<bits/stdc++.h>
using namespace std;
int show(int arr[])
{
    set<int>set;
    for(int i=1;i<6;i++)
    {
        set.insert(arr[i]);
    }
    for(int x : set) {
        cout << x << " ";
    }
}
int main()
{
    int arr[6]={1,1,2,2,3,3};
    show(arr);
    return 0;
}