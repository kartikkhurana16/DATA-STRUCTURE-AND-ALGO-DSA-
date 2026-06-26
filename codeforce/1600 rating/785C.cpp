#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    long long capacity,m;
    cin>>capacity>>m;
    if(capacity<=m) return 0;
    long long day=0;
    long long l=1;
    long long r=2e9;
    long long rem=capacity-m;
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(mid*(mid+1)/2>=rem){
            day=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<m+day;
    return 0;
}

// int main(){
//     int capacity=5;
//     int m=2;
//     int day = 1;
//     int grain=capacity;
//     while(grain){
//         grain=min(capacity,grain+m);
//         grain-=min(grain,day);
//         if(grain==0){
//             cout<<day;
//             break;
//         }
//         day++;
//     }
    
//     return 0;
// }