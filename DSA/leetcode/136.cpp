#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    
    public: vector<int> nums;
    
        int sum=0;
    int singleNumber()
    {
        nums={4,2,1,2,1};
        for(int i : nums)
        {
            sum=sum^i;
        }
        cout<<sum<<endl;
    }

}s;
int main()
{
    s.singleNumber();
     return 0;
}

