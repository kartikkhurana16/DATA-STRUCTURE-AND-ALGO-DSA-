#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="the sky is blue";

    reverse(s.begin(),s.end());
    int i=0;int j=0;
    while(j<s.length()){
        while(j<s.length() && s[j]!=' '){
            j++;
        }
        int left=i;
        int right=j-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }

        j++;
        i=j;
    }
    cout<<s;
    return 0;

}
