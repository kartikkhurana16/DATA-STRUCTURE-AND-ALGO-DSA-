#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr)
{
   int n=arr.size();
   vector<int>posarr,negarr;

   for(int i=0;i<n;i++){
    if(arr[i]<0){
        negarr.push_back(arr[i]);
    }
    else {
        posarr.push_back(arr[i]);
    }
   }

   if(posarr.size()>negarr.size()){
    for(int i=0;i<negarr.size();i++ ){
        arr[2*i]=posarr[i];
        arr[2*i+1]=negarr[i];
    }
    int index=negarr.size()*2;
    for(int i=negarr.size();i<posarr.size();i++){
        arr[index]=posarr[i];
        index++;
    }
   }
   else{
     for(int i=0;i<posarr.size();i++ ){
        arr[2*i]=posarr[i];
        arr[2*i+1]=negarr[i];
    }
    int index=posarr.size()*2;
    for(int i=posarr.size();i<negarr.size();i++){
        arr[index]=negarr[i];
        index++;
    }
}

}
int main()
{
    vector<int>arr={2,4,5,-1,3,-4};
    int n=arr.size();
    func(arr);

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}