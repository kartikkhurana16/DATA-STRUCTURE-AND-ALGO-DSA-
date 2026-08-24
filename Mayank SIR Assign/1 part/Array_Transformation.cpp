#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,6,3,4,3,5};
    if(arr.size()<=2) {
        cout<<"invalid array";
        return 0;
    }
    while(true){
        vector<int>temp=arr;
        for(int i=1;i<arr.size()-1;i++){
        
            if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
            {
                temp[i]++;
    
            }
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                temp[i]--;
         
            }
        }
        
        if(arr==temp){
            break;
        }
        arr=temp;
    }
    for(int i:arr){
        cout<<i<<" ̃̃";
    }

    return 0;
}