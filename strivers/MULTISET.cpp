#include<bits/stdc++.h>
using namespace std;
void sstart()
{
 multiset<int> ms;
 ms.insert(1);
 ms.insert(1);
 ms.insert(10);
 ms.insert(5);
 ms.insert(1);
 ms.insert(10);
 ms.insert(5);

 for(auto it:ms)
 {
    cout<<it<<",";
 }
 cout<<endl;
 cout<<ms.count(1)<<ms.count(5)<<ms.count(10);

 cout<<endl;
 //ms.erase(1);          //it will erase all 1
// ms.erase(ms.find(1));   //it will erase only starting 1
 ms.erase(ms.find(1),ms.find(5)); //it will erase from to from
for(auto it:ms)
 {
    cout<<it<<",";
 }
}
int main()
{
    sstart();
    return 0;
}