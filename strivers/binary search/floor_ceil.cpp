#include <bits/stdc++.h>
using namespace std;

void func(vector<int>& nums, int k) {

    int n = nums.size();

    int floorVal = -1;
    int ceilVal = -1;

    int lbIndex = lower_bound(nums.begin(), nums.end(), k) - nums.begin();
    int ubIndex = upper_bound(nums.begin(), nums.end(), k) - nums.begin();

    cout<<lbIndex<<ubIndex;
    
    if (lbIndex < n) {
        ceilVal = nums[lbIndex];
    }


    if (ubIndex > 0) {
        floorVal = nums[ubIndex - 1];
    }

    cout << "Floor: " << floorVal << endl;
    cout << "Ceil: " << ceilVal << endl;
}

int main(){
    vector<int> nums = {1,2,3,4,5,7};
    int k;
    cin >> k;

    func(nums, k);
}