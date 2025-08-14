#include<bits/stdc++.h>
using namespace  std;
vector<float>v={1,2,3,4,5};
void start()
{
    v.insert(v.begin()+2,2,10);
    for(auto it:v){
        cout<<it<<" ";
    }
}
void main2()
{
    vector<int>copy={10,20};
    v.insert(v.begin()+1,copy.begin(),copy.end());
     for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl<<v.empty();

}
int main()
{
    main2();
    start();
    return 0;
}