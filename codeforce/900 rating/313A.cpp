#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n>=0){
        cout<<n;
        return 0;
    }
   string temp = to_string(abs(n));
    int i = temp.length() - 1;
    int minimum = max(temp[i] - '0', temp[i - 1] - '0');
    if (temp[i] - '0' == minimum)
        temp.erase(temp.begin() +i);
    else
        temp.erase(temp.begin() + i - 1);

    int ans=stoi(temp);
    if(ans==0){
        cout<<ans;
    }
    else{
        ans=0-ans;
        cout<<ans;
    }

    return 0;
}