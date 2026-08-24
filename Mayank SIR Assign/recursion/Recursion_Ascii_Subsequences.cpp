#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void func(int i,string &x,string temp){
    if(i==x.length()){
        ans.push_back(temp);
        return ;
    }
    // temp+=x[i];
    func(i+1,x,temp);
    // temp.pop_back();
    func(i+1,x,temp+x[i]);
    func(i+1,x,temp+to_string((int)x[i]));
}
int main(){
    string x;
    cin>>x;
    func(0,x,"");
    for (string s : ans)
        cout << "\"" << s << "\"" << endl;
    return 0;
}