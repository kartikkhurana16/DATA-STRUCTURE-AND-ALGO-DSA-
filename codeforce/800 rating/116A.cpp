#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        int exit;
        int enter;
        cin>>exit>>enter;

        if(count>0){
            count-=exit;
            if(count<0){
                count=0;
            }
        }
        count+=enter;

        maxsum=max(maxsum, count);
    }
    cout<<maxsum;
    return 0;
}