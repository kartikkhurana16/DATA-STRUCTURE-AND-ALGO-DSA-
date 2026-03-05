#include<bits/stdc++.h>
using namespace std;
void start()        // MAX HEAP
{
 priority_queue<int>pq;
 pq.push(5);
 pq.push(2);
 pq.push(8);   
 pq.emplace(10);

 cout<<pq.top()<<endl;

 pq.pop();
 cout<<pq.top();
}
void start1()       // MINIMUM HEAP
{
    priority_queue<int,vector<int>,greater<int>>pq;
     pq.push(5);
     pq.push(2);
     pq.push(8);   
     pq.emplace(10);

     cout<<pq.top()<<endl;
     pq.pop();
     cout<<pq.top()<<endl;

}
int main()
{
    start1();
    start();
    return 0;
}