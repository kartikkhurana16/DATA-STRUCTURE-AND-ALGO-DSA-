#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
void func(int i,string &x,string temp){
    if(i==x.length()){
        ans.push_back(temp);
        return;
    }
    if(i>x.length() || x[i]==0) return;
    int one = x[i] - '0';
    temp+='a'+(one-1);
    func(i+1,x,temp);
    temp.pop_back();
    if (i + 1 < x.length()) {

        int two = (x[i] - '0') * 10 + (x[i + 1] - '0');

        if (two >= 10 && two <= 26) {

            temp.push_back('a' + two - 1);

            func(i + 2, x, temp);

            temp.pop_back();

        }
    }
}
int main(){
    string x;
    cin>>x;
    func(0,x,"");

    for (string s : ans)

        cout << s << endl;
    return 0;
}