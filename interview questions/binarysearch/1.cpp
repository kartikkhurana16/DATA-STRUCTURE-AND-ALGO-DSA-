#include<bits/stdc++.h>
using namespace std;
int lower(vector<int>& arr, int k) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = arr.size();

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= k) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int upper(vector<int>& arr, int k) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = arr.size();

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] > k) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return ans;
}
int main(){
    vector<int>arr={2,3,4,5,7,9,9,9,9,9,9,9,10,13,19,20};
    int target = 9;
    int left=lower(arr,target);
    int right=upper(arr,target);

    int ans=right-left;
    cout<<ans;
    return 0;
}