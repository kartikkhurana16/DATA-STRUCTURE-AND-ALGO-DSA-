/*
    pair

include<bits/stdc++.h>
using namespace std;
void Print()
{
    pair<int, int>p={1,2};
    cout<<p.first;
    cout<<p.second;
}
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    Print();
    int s=sum(2,4);
    cout<<s;
    return 0;
} 


    nested pair

    
#include<bits/stdc++.h>
using namespace std;
void Print()
{
   pair<int ,pair<int,int>>p={1,{3,6}};
   cout<<p.second.first;
}
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    Print();
    int s=sum(2,4);
    cout<<s;
    return 0;
} 

    pair array
    */

     
#include<bits/stdc++.h>
using namespace std;
void Print()
{
   pair<int,int>arr[]={{1,2},{2,3},{4,5}};
   cout<<arr[1].first;
   cout<<arr[0].first;
}
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    Print();
    return 0;
} 