#include <bits/stdc++.h>
using namespace std;

int minMeetingRooms(vector<vector<int>>& intervals) {

   vector<int>st;
   vector<int>end;

   for(auto arr:intervals){
    st.push_back(arr[0]);
    end.push_back(arr[1]);
   }

   sort(st.begin(),st.end());
   sort(end.begin(),end.end());
   int i=0;
   int j=0;
   int rooms=0;
   int maxrooms=0;
   while(i<intervals.size()){
    if(st[i]<end[j]){
        rooms++;
        i++;
        maxrooms=max(maxrooms,rooms);
    }
    else{
        rooms--;
        j++;
    }
   }
   return maxrooms;
}

int main() {

    vector<vector<int>> arr = 
        {{7,10},{2,4}};

    cout << minMeetingRooms(arr);

    return 0;
}