#include<bits/stdc++.h>
using namespace std;
    void countFreq(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int x=-1;
        int y=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                x=mid;
                high=mid-1;
            }
            else if (arr[mid] < target) {

                low = mid + 1;

            }
            else{
                high=mid-1;
            }
        }
         if (x == -1){
            cout<<0;
            return;
         }
        low=0;
        high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                y=mid;
                low=mid+1;
            }
            else if (arr[mid] < target) {

                low = mid + 1;

            }
            else{
                high=mid-1;
            }
        }
        cout<< y-x+1;
    }

    int main(){
        vector<int>arr={1, 1, 2, 2, 2, 2, 3};
        int target=2;
        countFreq(arr,target);
        return 0;
    }
