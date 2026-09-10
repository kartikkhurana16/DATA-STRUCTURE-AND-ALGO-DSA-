/*Problem Description
You are tasked with ensuring that the prices of cars, initially arranged in a line, become non-decreasing as quickly as possible. The price of each car is given as an array. You can perform operations over multiple chances to adjust the car prices.

At each chance X, you can select one or more distinct cars at indices
(i_1, i_2, ..., i_k) where (k>=0) and add 2^{X-1} to the prices of those cars, Formally C[i]=C[i] + 2^{X-1}.

Your objective is to find the smallest number (T) such that after (T) chances, the prices of all cars are non-decreasing.

Input Format:
t: An integer representing the number of test cases.
For each test case:
n: An integer representing the number of cars.
carPrices: An array of (n) integers, where C[i] represents the price of the
ith car.
The sum of (n) across all test cases does not exceed 10^6.

Output Format:
For each test case, output the minimum number of chances (T) required to make the car prices non-decreasing.
*/
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n=2;
    vector<int>arr={6,2};
    int count=0;
    int x=0;
    int maxdif=0;
    int ans=arr[0];
    for(int i=1;i<n;i++){
        maxdif=max(maxdif,ans-arr[i]);
        ans=max(ans,arr[i]);
    }
    // cout<<maxdif;
    while(x<maxdif){
        x=x*2+1;
        count++;
    }
    cout<<count;
    return 0;
}
