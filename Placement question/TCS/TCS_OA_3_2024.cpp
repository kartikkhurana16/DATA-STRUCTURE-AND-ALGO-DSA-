//Given an integer array nums, the task is to find the contiguous subarray (containing at least one number) that has the largest sum and return that sum.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int currSum = nums[0];
    int maxSum = nums[0];
    for (int i = 1; i < n; i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum;
    return 0;
}
