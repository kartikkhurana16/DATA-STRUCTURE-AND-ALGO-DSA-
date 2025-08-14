#include<bits/stdc++.h>
using namespace std;
void start()
{
    queue<int>q;
     q.push(1);
     q.push(2);
     q.emplace(3);
     q.emplace(4);

     cout<<q.back();
     cout<<q.front();
cout<<endl;
     q.back()+=5;
     q.front()+=10;

     cout<<q.back()<<" ";
     cout<<q.front();
     cout<<endl;

      q.pop();

      cout<<q.front();
}
int main()
{
    start();
    return  0;
}