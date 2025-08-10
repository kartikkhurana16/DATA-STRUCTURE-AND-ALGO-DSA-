#include<bits/stdc++.h>
using namespace std;
void print()
{
    vector<int>v;
    v={10,10,10,10};
    v.push_back(20);
    for(int i=0;i<=4;i++){
    cout<<v[i];
    }
}
void pairs()
{
    vector<pair<int ,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,4);
    cout<<vec[1].second;
}
void samevector()
{
    vector<int>v(5,100);
    for(int i=0;i<=4;i++){
    cout<<v[i]<<endl;
    }

}
int main()
{
    
    samevector();
    return 0;
}