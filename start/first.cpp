#include<iostream>
using namespace std;

class Solution {
public: int array[4]={2,7,11,15};
        int a,index;
        int target=0;
        void function(){
            cin>>a;
            for(int val=0;val<4;val++)
        {
            target += array[val];
            if(target==a)
            {
                cout<<val;
            }
        }
    }
}s;
int main()

{
    s.function();
    return 0;
}