#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n > 0) {
        int len;
        cin >> len;
        vector<int> arr(len);
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        int i=0;
        bool count = true;
        while(arr.size()!=1){
            if(count){
                int large=max(arr[i],arr[i+1]);
                arr[i+1]=large;
                arr.erase(arr.begin()+i);
                count=false;
            }
            else{
                int small=min(arr[i],arr[i+1]);
                arr[i+1]=small;
                arr.erase(arr.begin()+i);
                count=true;
            }
            i++;
            }
            if(arr.size()==1){
                if(arr[0]==1){
                    cout<<"Bessie\n";
                }
                else cout<<"Elsie\n";
            }
        n--;
    }

    return 0;
}