#include<bits/stdc++.h>
using namespace std;
void start()
{
    vector<int>v={1,5,7,2,4};
    // sort(v.begin(),v.end());
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
void start2()
{
     vector<int>v={1,5,7,2,4};
     sort(v.begin(),v.end(),greater<int>());
     for(auto it:v)
    {
        cout<<it<<" ";
    }
    
}

void start1()
{
   int num=7;
   int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;
    long long nm=893239423423442;
    int c=__builtin_popcountll(nm);
    cout<<c;

}
void start4(){
    string st="1923";
    sort(st.begin(),st.end());
    // do
    // {
    //     cout<<st<<endl;
    // } while (next_permutation(st.begin(),st.end()));
    int max=*max_element(st.begin(),st.end());
    cout<<max;
}
int main()
{
    start4();
    // start1();
    // start();
    // start2();
    return 0;
}