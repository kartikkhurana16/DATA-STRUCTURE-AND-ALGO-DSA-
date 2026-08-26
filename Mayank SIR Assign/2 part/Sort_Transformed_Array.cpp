#include<bits/stdc++.h>
using namespace std;
int f(int a,int b,int c,int x){
    return pow(x,2)*a+b*x+c;
}
int main(){
    vector<int>arr={-4,-2,2,4};
    vector<int>ans(arr.size());
    int n=arr.size();
    int a=1,b=3,c=5;
    int left=0;
    int right=n-1;
    int k=(a<0)?0:(n-1);
    while(left<=right){
        int v1=f(a,b,c,arr[left]);
        int v2=f(a,b,c,arr[right]);
        if(a<0){
            if(v1<=v2){
                ans[k]=v1;
                left++;
            }
            else{
                ans[k]=v2;
                right--;
            }
            k++;
        }
        else{
            if(v1<=v2){
                ans[k]=v2;
                right--;
            }
            else{
                ans[k]=v1;
                left++;
            }
            k--;
        }
    }
   
    for(int i=0;i<arr.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}